/********************************************************************************
** Form generated from reading UI file 'showinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWINFO_H
#define UI_SHOWINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_ShowInfo
{
public:
    QPushButton *pushLookButton;
    QTextEdit *textEdit;
    QPushButton *pushWatchMarksButton;
    QPushButton *pushWatchSubjectButton;
    QLineEdit *lineMarksEdit;
    QLineEdit *lineSubjectEdit;
    QPushButton *pushWatchIDButton;
    QLineEdit *lineIDEdit;

    void setupUi(QDialog *ShowInfo)
    {
        if (ShowInfo->objectName().isEmpty())
            ShowInfo->setObjectName("ShowInfo");
        ShowInfo->resize(400, 535);
        pushLookButton = new QPushButton(ShowInfo);
        pushLookButton->setObjectName("pushLookButton");
        pushLookButton->setGeometry(QRect(170, 370, 75, 24));
        textEdit = new QTextEdit(ShowInfo);
        textEdit->setObjectName("textEdit");
        textEdit->setEnabled(true);
        textEdit->setGeometry(QRect(10, 10, 381, 341));
        textEdit->setTabChangesFocus(false);
        textEdit->setReadOnly(true);
        pushWatchMarksButton = new QPushButton(ShowInfo);
        pushWatchMarksButton->setObjectName("pushWatchMarksButton");
        pushWatchMarksButton->setGeometry(QRect(50, 410, 151, 24));
        pushWatchSubjectButton = new QPushButton(ShowInfo);
        pushWatchSubjectButton->setObjectName("pushWatchSubjectButton");
        pushWatchSubjectButton->setGeometry(QRect(50, 440, 151, 24));
        lineMarksEdit = new QLineEdit(ShowInfo);
        lineMarksEdit->setObjectName("lineMarksEdit");
        lineMarksEdit->setGeometry(QRect(210, 410, 131, 22));
        lineSubjectEdit = new QLineEdit(ShowInfo);
        lineSubjectEdit->setObjectName("lineSubjectEdit");
        lineSubjectEdit->setGeometry(QRect(210, 440, 131, 22));
        pushWatchIDButton = new QPushButton(ShowInfo);
        pushWatchIDButton->setObjectName("pushWatchIDButton");
        pushWatchIDButton->setGeometry(QRect(50, 470, 151, 24));
        lineIDEdit = new QLineEdit(ShowInfo);
        lineIDEdit->setObjectName("lineIDEdit");
        lineIDEdit->setGeometry(QRect(210, 470, 131, 22));

        retranslateUi(ShowInfo);

        QMetaObject::connectSlotsByName(ShowInfo);
    } // setupUi

    void retranslateUi(QDialog *ShowInfo)
    {
        ShowInfo->setWindowTitle(QCoreApplication::translate("ShowInfo", "Dialog", nullptr));
        pushLookButton->setText(QCoreApplication::translate("ShowInfo", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200", nullptr));
        pushWatchMarksButton->setText(QCoreApplication::translate("ShowInfo", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200 \320\277\320\276 \320\276\321\206\320\265\320\275\320\272\320\260\320\274", nullptr));
        pushWatchSubjectButton->setText(QCoreApplication::translate("ShowInfo", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200 \320\277\320\276 \320\277\321\200\320\265\320\264\320\274\320\265\321\202\320\260\320\274", nullptr));
        pushWatchIDButton->setText(QCoreApplication::translate("ShowInfo", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200 \320\277\320\276 ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowInfo: public Ui_ShowInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWINFO_H
