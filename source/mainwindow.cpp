#include <memory>
#include <cctype>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Exams.h"
#include "showinfo.h"
#include "ui_showinfo.h"

uint32_t exams_amount = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    info_window = new ShowInfo;
    info_window->setWindowTitle("Information");

    ui->setupUi(this);
    ui->pushNewNodeButton->setEnabled(false);

    file_ = new QFile(this);
    r_file_ = new QFile(this);
    file_->setFileName("exams_info.txt");
    r_file_->setFileName("read_data.txt");

    readFile(r_file_, false);

    ui->pushDeleteButton->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::writeFile(QFile* file, bool needRewrite){
    if(needRewrite){
        if(file->open(QIODevice::WriteOnly | QIODevice::Text)){
            QTextStream out(file);
            for(int i=0;i<exams.size();i++){
                out << "Имя студента: " << exams[i]->name << "\n";
                out << "Фамилия студента: " << exams[i]->sirname << "\n";
                out << "ID студента: " << exams[i]->id << "\n";
                out << "Тип сдачи: " << exams[i]->type << "\n";
                out << "Предмет: " << exams[i]->subject << "\n";
                out << "Оценка: " << exams[i]->mark << "\n";
                out << "\n";
            }
        }
        file->close();
    }
    else{
        if(file->open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append)) {
            QTextStream out(file);
            out << "Имя студента: " << w_name << "\n";
            out << "Фамилия студента: " << w_sirname << "\n";
            out << "ID студента: " << w_id << "\n";
            out << "Тип сдачи: " << w_type << "\n";
            out << "Предмет: " << w_subject << "\n";
            out << "Оценка: " << w_mark << "\n";
            out << "\n";
        }
        file->close();
    }
}

void MainWindow::readFile(QFile* r_file, bool needRewrite){
    if(!needRewrite){
        if(r_file->open(QIODevice::ReadOnly | QIODevice::Text)){
            QTextStream in(r_file);
            exams_amount = in.readLine().toInt();
            uint32_t counter = 0;
            while(counter < exams_amount){
                std::shared_ptr<Exams>exam (new Exams);
                exam->name = in.readLine();
                exam->sirname = in.readLine();
                exam->id = in.readLine().toInt();
                exam->type = in.readLine();
                exam->subject = in.readLine();
                exam->mark = in.readLine().toInt();
                exams.push_back(exam);
                counter++;
            }
        }
    }
    else{
        if(r_file->open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream out(r_file);
            out << exams_amount << "\n";
            for (int i=0;i<exams.size();i++){
                out << exams[i]->name << "\n";
                out << exams[i]->sirname << "\n";
                out << exams[i]->id << "\n";
                out << exams[i]->type << "\n";
                out << exams[i]->subject << "\n";
                out << exams[i]->mark << "\n";
            }
        }
    }
    r_file->close();
}

void MainWindow::update(ShowInfo* window){
    window->ui->textEdit->clear();
    QFile r_file("exams_info.txt");
    if(r_file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream in(&r_file);
        QString str = "";
        str = in.readAll();
        window->ui->textEdit->append(str);
    }
    r_file.close();
}

void MainWindow::on_pushSaveButton_clicked()
{
    exams_amount++;
    const uint32_t arr_info_size = 4;


    std::shared_ptr<Exams> exam(new Exams);
    QString temp[arr_info_size] = {w_name, w_sirname, w_subject, w_type};
    for(uint i = 0; i < arr_info_size; i++){
        if(temp[i][0].isLower()){
            temp[i][0] = temp[i][0].toUpper();
        }
    }

    w_name = temp[0];
    w_sirname = temp[1];
    w_subject = temp[2];
    w_type = temp[3];

    exam->id = w_id;
    exam->mark = w_mark;
    exam->name = w_name;
    exam->sirname = w_sirname;
    exam->subject = w_subject;
    exam->type = w_type;
    exams.push_back(exam);

    writeFile(file_, false);
    readFile(r_file_, true);

    ui->lineEditID->setEnabled(false);
    ui->lineEditID->setText("");
    ui->lineEditMark->setEnabled(false);
    ui->lineEditMark->setText("");
    ui->lineEditName->setEnabled(false);
    ui->lineEditName->setText("");
    ui->lineEditSirname->setEnabled(false);
    ui->lineEditSirname->setText("");
    ui->lineEditType->setEnabled(false);
    ui->lineEditType->setText("");
    ui->lineEditSubject->setEnabled(false);
    ui->lineEditSubject->setText("");
    ui->pushSaveButton->setEnabled(false);
    ui->pushNewNodeButton->setEnabled(true);

    update(info_window);
}

void MainWindow::on_lineEditName_textChanged(const QString &arg1)
{
    w_name = arg1;
}

void MainWindow::on_lineEditSirname_textChanged(const QString &arg1)
{
    w_sirname = arg1;
}

void MainWindow::on_lineEditType_textChanged(const QString &arg1)
{
    w_type = arg1;
}

void MainWindow::on_lineEditSubject_textChanged(const QString &arg1)
{
    w_subject = arg1;
}

void MainWindow::on_lineEditID_textChanged(const QString &arg1)
{
    bool ok;
    w_id = arg1.toInt(&ok);
}

void MainWindow::on_lineEditMark_textChanged(const QString &arg1)
{
    bool ok;
    w_mark = arg1.toInt(&ok);
}

void MainWindow::on_pushNewNodeButton_clicked()
{
    ui->lineEditID->setEnabled(true);
    ui->lineEditMark->setEnabled(true);
    ui->lineEditName->setEnabled(true);
    ui->lineEditSirname->setEnabled(true);
    ui->lineEditType->setEnabled(true);
    ui->lineEditSubject->setEnabled(true);
    ui->pushSaveButton->setEnabled(true);
    ui->pushNewNodeButton->setEnabled(false);
}


void MainWindow::on_pushSortMarkButton_clicked()
{
    for(int i=0;i<exams.size();i++){
        for (int j=0;j<exams.size()-1;j++){
            if(exams[j]->mark > exams[j+1]->mark){
                std::shared_ptr<Exams> temp = exams[j];
                exams[j] = exams[j+1];
                exams[j+1] = temp;
            }
        }
    }
    writeFile(file_, true);
    readFile(r_file_, true);
    update(info_window);
}

void MainWindow::on_pushSortIDButton_clicked()
{
    for(int i=0;i<exams.size();i++){
        for (int j=0;j<exams.size()-1;j++){
            if(exams[j]->id > exams[j+1]->id){
                std::shared_ptr<Exams> temp = exams[j];
                exams[j] = exams[j+1];
                exams[j+1] = temp;
            }
        }
    }
    writeFile(file_, true);
    readFile(r_file_, true);
    update(info_window);
}


void MainWindow::on_pushDeleteButton_clicked()
{
    exams_amount--;
    for(int i=0;i<exams.size();i++){
        if(exams[i]->id == w_delete_id){
            exams.erase(exams.begin() + i);
            break;
        }
    }
    writeFile(file_, true);
    readFile(r_file_, true);
    ui->pushDeleteButton->setEnabled(false);
    ui->lineDeleteIDEdit->setText("");
    update(info_window);
}


void MainWindow::on_lineDeleteIDEdit_textChanged(const QString &arg1)
{
    bool ok;
    ui->pushDeleteButton->setEnabled(true);
    w_delete_id = arg1.toInt(&ok);
}

void MainWindow::on_pushWatchButton_clicked()
{
    update(info_window);
    info_window->show();
}
