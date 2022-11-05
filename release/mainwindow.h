#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <memory>
#include <QFile>
#include <QTextStream>
#include <QString>

#include "showinfo.h"
#include "Exams.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushSaveButton_clicked();

    void on_lineEditName_textChanged(const QString &arg1);

    void on_lineEditType_textChanged(const QString &arg1);

    void on_lineEditMark_textChanged(const QString &arg1);

    void on_lineEditSirname_textChanged(const QString &arg1);

    void on_lineEditID_textChanged(const QString &arg1);

    void on_lineEditSubject_textChanged(const QString &arg1);

    void on_pushNewNodeButton_clicked();

    void on_pushSortMarkButton_clicked();

    void on_pushSortIDButton_clicked();

    void on_pushDeleteButton_clicked();

    void on_lineDeleteIDEdit_textChanged(const QString &arg1);

    void on_pushWatchButton_clicked();
private:
    Ui::MainWindow *ui;
    QFile* file_;
    QFile* r_file_;
    QFile e_file_;
    ShowInfo* info_window;

    QVector<std::shared_ptr<Exams>> exams;

    QString w_name, w_sirname, w_subject, w_type, w_delete_subject;
    uint32_t w_id, w_delete_id;
    uint8_t w_mark;

    void writeFile(QFile* file, bool needRewrite);
    void readFile(QFile* r_file, bool needRewrite);

    void update(ShowInfo* window);

};

#endif // MAINWINDOW_H
