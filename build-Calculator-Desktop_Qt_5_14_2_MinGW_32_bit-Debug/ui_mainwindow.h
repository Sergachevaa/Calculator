/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *result;
    QPushButton *pushButtonAC;
    QPushButton *pushButton_plus_min;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_del;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_mult;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_1;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_0;
    QPushButton *pushButton_equally;
    QPushButton *pushButton_point;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(258, 379);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        result = new QLabel(centralwidget);
        result->setObjectName(QString::fromUtf8("result"));
        result->setGeometry(QRect(0, 0, 241, 61));
        QFont font;
        font.setPointSize(20);
        result->setFont(font);
        result->setStyleSheet(QString::fromUtf8("QLabel{\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"border-bottom: 1px solid gray;\n"
"} \n"
"\n"
"background -color: white;"));
        pushButtonAC = new QPushButton(centralwidget);
        pushButtonAC->setObjectName(QString::fromUtf8("pushButtonAC"));
        pushButtonAC->setGeometry(QRect(10, 70, 64, 64));
        pushButtonAC->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #e8e8e8, stop: 1 #d7d7d7);\n"
"    border: 1px solid #a0a0a0;\n"
"    border-radius: 25px;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"\n"
"    color: #333;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"\n"
"    padding: 6px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f0f0f0, stop: 1 #cfcfcf);\n"
"    border: 1px solid #888;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #cacaca, stop: 1 #e0e0e0);\n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}"));
        pushButton_plus_min = new QPushButton(centralwidget);
        pushButton_plus_min->setObjectName(QString::fromUtf8("pushButton_plus_min"));
        pushButton_plus_min->setGeometry(QRect(70, 70, 64, 64));
        pushButton_plus_min->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #e8e8e8, stop: 1 #d7d7d7);\n"
"    border: 1px solid #a0a0a0;\n"
"    border-radius: 25px;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"\n"
"    color: #333;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"\n"
"    padding: 6px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f0f0f0, stop: 1 #cfcfcf);\n"
"    border: 1px solid #888;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #cacaca, stop: 1 #e0e0e0);\n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}"));
        pushButton_percent = new QPushButton(centralwidget);
        pushButton_percent->setObjectName(QString::fromUtf8("pushButton_percent"));
        pushButton_percent->setGeometry(QRect(130, 70, 64, 64));
        pushButton_percent->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #e8e8e8, stop: 1 #d7d7d7);\n"
"    border: 1px solid #a0a0a0;\n"
"    border-radius: 25px;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"\n"
"    color: #333;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"\n"
"    padding: 6px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f0f0f0, stop: 1 #cfcfcf);\n"
"    border: 1px solid #888;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #cacaca, stop: 1 #e0e0e0);\n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}"));
        pushButton_del = new QPushButton(centralwidget);
        pushButton_del->setObjectName(QString::fromUtf8("pushButton_del"));
        pushButton_del->setGeometry(QRect(190, 70, 64, 64));
        pushButton_del->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffb066, stop: 1 #ff9739); \n"
"    color: white;\n"
"    border: 1px solid #a45a2a;\n"
"    border-radius: 25px;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    padding: 6px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffbe7f, stop: 1 #ff8a2c);\n"
"    border: 1px solid #934d22;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ff7832, stop: 1 #ff9739);\n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 130, 62, 62));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #fefefe, stop: 1 #d6d7db);\n"
"    border: 1px solid #a0a0a0;\n"
"    border-radius: 25px;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"    color: #333;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffffff, stop: 1 #c8c8c8);\n"
"    border: 1px solid #888;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #d0d0d0, stop: 1 #f0f0f0);\n"
"    padding-left: 7px;\n"
"    padding-top: 7px;\n"
"}"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(70, 130, 62, 62));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #fefefe, stop: 1 #d6d7db);\n"
"    border: 1px solid #a0a0a0;\n"
"    border-radius: 25px;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"    color: #333;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffffff, stop: 1 #c8c8c8);\n"
"    border: 1px solid #888;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #d0d0d0, stop: 1 #f0f0f0);\n"
"    padding-left: 7px;\n"
"    padding-top: 7px;\n"
"}"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(130, 130, 62, 62));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #fefefe, stop: 1 #d6d7db);\n"
"    border: 1px solid #a0a0a0;\n"
"    border-radius: 25px;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"    color: #333;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffffff, stop: 1 #c8c8c8);\n"
"    border: 1px solid #888;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #d0d0d0, stop: 1 #f0f0f0);\n"
"    padding-left: 7px;\n"
"    padding-top: 7px;\n"
"}"));
        pushButton_mult = new QPushButton(centralwidget);
        pushButton_mult->setObjectName(QString::fromUtf8("pushButton_mult"));
        pushButton_mult->setGeometry(QRect(190, 130, 64, 64));
        pushButton_mult->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffb066, stop: 1 #ff9739); \n"
"    color: white;\n"
"    border: 1px solid #a45a2a;\n"
"    border-radius: 25px;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    padding: 6px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffbe7f, stop: 1 #ff8a2c);\n"
"    border: 1px solid #934d22;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ff7832, stop: 1 #ff9739);\n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 190, 62, 62));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #fefefe, stop: 1 #d6d7db);\n"
"    border: 1px solid #a0a0a0;\n"
"    border-radius: 25px;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"    color: #333;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffffff, stop: 1 #c8c8c8);\n"
"    border: 1px solid #888;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #d0d0d0, stop: 1 #f0f0f0);\n"
"    padding-left: 7px;\n"
"    padding-top: 7px;\n"
"}"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(70, 190, 62, 62));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #fefefe, stop: 1 #d6d7db);\n"
"    border: 1px solid #a0a0a0;\n"
"    border-radius: 25px;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"    color: #333;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffffff, stop: 1 #c8c8c8);\n"
"    border: 1px solid #888;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #d0d0d0, stop: 1 #f0f0f0);\n"
"    padding-left: 7px;\n"
"    padding-top: 7px;\n"
"}"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(130, 190, 62, 62));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #fefefe, stop: 1 #d6d7db);\n"
"    border: 1px solid #a0a0a0;\n"
"    border-radius: 25px;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"    color: #333;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffffff, stop: 1 #c8c8c8);\n"
"    border: 1px solid #888;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #d0d0d0, stop: 1 #f0f0f0);\n"
"    padding-left: 7px;\n"
"    padding-top: 7px;\n"
"}"));
        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(190, 190, 64, 64));
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffb066, stop: 1 #ff9739); \n"
"    color: white;\n"
"    border: 1px solid #a45a2a;\n"
"    border-radius: 25px;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    padding: 6px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffbe7f, stop: 1 #ff8a2c);\n"
"    border: 1px solid #934d22;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ff7832, stop: 1 #ff9739);\n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}"));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(10, 250, 62, 62));
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #fefefe, stop: 1 #d6d7db);\n"
"    border: 1px solid #a0a0a0;\n"
"    border-radius: 25px;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"    color: #333;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffffff, stop: 1 #c8c8c8);\n"
"    border: 1px solid #888;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #d0d0d0, stop: 1 #f0f0f0);\n"
"    padding-left: 7px;\n"
"    padding-top: 7px;\n"
"}"));
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(190, 250, 64, 64));
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffb066, stop: 1 #ff9739); \n"
"    color: white;\n"
"    border: 1px solid #a45a2a;\n"
"    border-radius: 25px;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    padding: 6px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffbe7f, stop: 1 #ff8a2c);\n"
"    border: 1px solid #934d22;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ff7832, stop: 1 #ff9739);\n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 250, 62, 62));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #fefefe, stop: 1 #d6d7db);\n"
"    border: 1px solid #a0a0a0;\n"
"    border-radius: 25px;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"    color: #333;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffffff, stop: 1 #c8c8c8);\n"
"    border: 1px solid #888;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #d0d0d0, stop: 1 #f0f0f0);\n"
"    padding-left: 7px;\n"
"    padding-top: 7px;\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(130, 250, 62, 62));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #fefefe, stop: 1 #d6d7db);\n"
"    border: 1px solid #a0a0a0;\n"
"    border-radius: 25px;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"    color: #333;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffffff, stop: 1 #c8c8c8);\n"
"    border: 1px solid #888;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #d0d0d0, stop: 1 #f0f0f0);\n"
"    padding-left: 7px;\n"
"    padding-top: 7px;\n"
"}"));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(10, 310, 121, 62));
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #fefefe, stop: 1 #d6d7db);\n"
"    border: 1px solid #a0a0a0;\n"
"    border-radius: 25px;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"    color: #333;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffffff, stop: 1 #c8c8c8);\n"
"    border: 1px solid #888;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #d0d0d0, stop: 1 #f0f0f0);\n"
"    padding-left: 7px;\n"
"    padding-top: 7px;\n"
"}"));
        pushButton_equally = new QPushButton(centralwidget);
        pushButton_equally->setObjectName(QString::fromUtf8("pushButton_equally"));
        pushButton_equally->setGeometry(QRect(190, 310, 64, 64));
        pushButton_equally->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffb066, stop: 1 #ff9739); \n"
"    color: white;\n"
"    border: 1px solid #a45a2a;\n"
"    border-radius: 25px;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    padding: 6px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffbe7f, stop: 1 #ff8a2c);\n"
"    border: 1px solid #934d22;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ff7832, stop: 1 #ff9739);\n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}"));
        pushButton_point = new QPushButton(centralwidget);
        pushButton_point->setObjectName(QString::fromUtf8("pushButton_point"));
        pushButton_point->setGeometry(QRect(130, 310, 64, 64));
        pushButton_point->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #e8e8e8, stop: 1 #d7d7d7);\n"
"    border: 1px solid #a0a0a0;\n"
"    border-radius: 25px;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"\n"
"    color: #333;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"\n"
"    padding: 6px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f0f0f0, stop: 1 #cfcfcf);\n"
"    border: 1px solid #888;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #cacaca, stop: 1 #e0e0e0);\n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        result->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButtonAC->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_plus_min->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_del->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_mult->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_equally->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
