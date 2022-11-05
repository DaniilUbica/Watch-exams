#ifndef SHOWINFO_H
#define SHOWINFO_H

#include <QDialog>

#include "Exams.h"

namespace Ui {
class ShowInfo;
}

class ShowInfo : public QDialog
{
    Q_OBJECT

public:
    Ui::ShowInfo *ui;
    QVector<std::shared_ptr<Exams>> exams;

    explicit ShowInfo(QWidget *parent = nullptr);
    ~ShowInfo();

private slots:
    void on_pushLookButton_clicked();

    void on_pushWatchMarksButton_clicked();

    void on_pushWatchSubjectButton_clicked();

    void on_pushWatchIDButton_clicked();

    void printInfo(QVector<std::shared_ptr<Exams>>);

    void readFile(QFile* file);

private:
    QFile* r_file_;

};

#endif // SHOWINFO_H
