#include "showinfo.h"
#include "ui_showinfo.h"
#include "mainwindow.h"

#include <QFile>

uint32_t exams_amount1 = 0;

ShowInfo::ShowInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowInfo)
{
    ui->setupUi(this);

    r_file_ = new QFile(this);
    r_file_->setFileName("read_data.txt");

    readFile(r_file_);
}

ShowInfo::~ShowInfo()
{
    delete ui;
}

void ShowInfo::readFile(QFile* r_file){
        if(r_file->open(QIODevice::ReadOnly | QIODevice::Text)){
            QTextStream in(r_file);
            exams_amount1 = in.readLine().toInt();
            uint32_t counter = 0;
            while(counter < exams_amount1){
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
    r_file->close();
}

void ShowInfo::printInfo(QVector<std::shared_ptr<Exams>> temp) {
        for(int i = 0; i<temp.size(); i++){
        ui->textEdit->append("Имя студента: " + temp[i]->name);
        ui->textEdit->append("Фамилия студента: " + temp[i]->sirname);
        ui->textEdit->append("ID студента: " + QString::number(temp[i]->id));
        ui->textEdit->append("Тип сдачи: " + temp[i]->type);
        ui->textEdit->append("Предмет: " + temp[i]->subject);
        ui->textEdit->append("Оценка: " + QString::number(temp[i]->mark));
        ui->textEdit->append("\n");
    }
}

void ShowInfo::on_pushLookButton_clicked()
{
    ui->textEdit->clear();
    QFile r_file("exams_info.txt");
    if(r_file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream in(&r_file);
        QString str = "";
        str = in.readAll();
        ui->textEdit->append(str);
    }
    r_file.close();
}

void ShowInfo::on_pushWatchMarksButton_clicked()
{
    ui->textEdit->clear();
    QVector<std::shared_ptr<Exams>> temp;
    uint8_t mark = (ui->lineMarksEdit->text()).toInt();
    for(int i=0;i<exams.size();i++){
        if (mark == exams[i]->mark){
            temp.push_back(exams[i]);
        }
    }
    printInfo(temp);
}


void ShowInfo::on_pushWatchSubjectButton_clicked()
{
    ui->textEdit->clear();
    QVector<std::shared_ptr<Exams>> temp;
    QString subject = ui->lineSubjectEdit->text();
    for(int i=0;i<exams.size();i++){
        if (subject == exams[i]->subject){
            temp.push_back(exams[i]);
        }
    }
    printInfo(temp);
}


void ShowInfo::on_pushWatchIDButton_clicked()
{
    ui->textEdit->clear();
    QVector<std::shared_ptr<Exams>> temp;
    uint32_t id = ui->lineIDEdit->text().toInt();
    for(int i=0;i<exams.size();i++){
        if (id == exams[i]->id){
            temp.push_back(exams[i]);
        }
    }
    printInfo(temp);
}

