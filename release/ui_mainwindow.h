/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEditName;
    QLineEdit *lineEditSirname;
    QLineEdit *lineEditID;
    QLineEdit *lineEditType;
    QLineEdit *lineEditSubject;
    QLabel *labelName;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEditMark;
    QPushButton *pushSaveButton;
    QLabel *label_6;
    QPushButton *pushNewNodeButton;
    QPushButton *pushSortIDButton;
    QPushButton *pushSortMarkButton;
    QPushButton *pushDeleteButton;
    QLineEdit *lineDeleteIDEdit;
    QLabel *labelName_2;
    QPushButton *pushWatchButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(493, 457);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lineEditName = new QLineEdit(centralwidget);
        lineEditName->setObjectName("lineEditName");
        lineEditName->setGeometry(QRect(89, 52, 133, 22));
        lineEditSirname = new QLineEdit(centralwidget);
        lineEditSirname->setObjectName("lineEditSirname");
        lineEditSirname->setGeometry(QRect(89, 114, 133, 22));
        lineEditID = new QLineEdit(centralwidget);
        lineEditID->setObjectName("lineEditID");
        lineEditID->setGeometry(QRect(89, 177, 133, 22));
        lineEditType = new QLineEdit(centralwidget);
        lineEditType->setObjectName("lineEditType");
        lineEditType->setGeometry(QRect(250, 50, 133, 22));
        lineEditSubject = new QLineEdit(centralwidget);
        lineEditSubject->setObjectName("lineEditSubject");
        lineEditSubject->setGeometry(QRect(250, 113, 133, 22));
        labelName = new QLabel(centralwidget);
        labelName->setObjectName("labelName");
        labelName->setGeometry(QRect(89, 19, 77, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(89, 82, 104, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(89, 144, 64, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(250, 18, 58, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(250, 80, 51, 16));
        lineEditMark = new QLineEdit(centralwidget);
        lineEditMark->setObjectName("lineEditMark");
        lineEditMark->setGeometry(QRect(250, 175, 133, 22));
        pushSaveButton = new QPushButton(centralwidget);
        pushSaveButton->setObjectName("pushSaveButton");
        pushSaveButton->setGeometry(QRect(150, 210, 75, 24));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(250, 143, 44, 16));
        pushNewNodeButton = new QPushButton(centralwidget);
        pushNewNodeButton->setObjectName("pushNewNodeButton");
        pushNewNodeButton->setGeometry(QRect(250, 210, 91, 24));
        pushSortIDButton = new QPushButton(centralwidget);
        pushSortIDButton->setObjectName("pushSortIDButton");
        pushSortIDButton->setGeometry(QRect(170, 270, 161, 24));
        pushSortMarkButton = new QPushButton(centralwidget);
        pushSortMarkButton->setObjectName("pushSortMarkButton");
        pushSortMarkButton->setGeometry(QRect(150, 240, 201, 24));
        pushDeleteButton = new QPushButton(centralwidget);
        pushDeleteButton->setObjectName("pushDeleteButton");
        pushDeleteButton->setGeometry(QRect(170, 300, 161, 24));
        lineDeleteIDEdit = new QLineEdit(centralwidget);
        lineDeleteIDEdit->setObjectName("lineDeleteIDEdit");
        lineDeleteIDEdit->setGeometry(QRect(340, 300, 91, 22));
        labelName_2 = new QLabel(centralwidget);
        labelName_2->setObjectName("labelName_2");
        labelName_2->setGeometry(QRect(340, 280, 91, 16));
        pushWatchButton = new QPushButton(centralwidget);
        pushWatchButton->setObjectName("pushWatchButton");
        pushWatchButton->setGeometry(QRect(180, 330, 141, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 493, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelName->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "ID \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277 \321\201\320\264\320\260\321\207\320\270:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202:", nullptr));
        pushSaveButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\236\321\206\320\265\320\275\320\272\320\260:", nullptr));
        pushNewNodeButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\262\320\260\321\217 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        pushSortIDButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\260 \321\201\320\277\320\270\321\201\320\272\320\260 \320\277\320\276 ID", nullptr));
        pushSortMarkButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\260 \321\201\320\277\320\270\321\201\320\272\320\260 \320\277\320\276 \320\276\321\206\320\265\320\275\320\272\320\260\320\274", nullptr));
        pushDeleteButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260", nullptr));
        labelName_2->setText(QCoreApplication::translate("MainWindow", "ID \320\264\320\273\321\217 \321\203\320\264\320\260\320\273\320\265\320\275\320\270\321\217", nullptr));
        pushWatchButton->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200 \320\267\320\260\320\277\320\270\321\201\320\265\320\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
