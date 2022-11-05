#ifndef EXAMS_H
#define EXAMS_H

#include <QMainWindow>
#include <QFile>

QT_BEGIN_NAMESPACE
namespace Ui { struct Exams; }
QT_END_NAMESPACE

struct Exams{
    QString name, sirname, subject, type;
    uint32_t id;
    uint8_t mark;
    static uint32_t amount;  
};

#endif // EXAMS_H
