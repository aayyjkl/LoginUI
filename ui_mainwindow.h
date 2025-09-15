/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QFormLayout *formLayout_2;
    QLabel *label1;
    QLineEdit *lineEdit_1;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(986, 618);
        MainWindow->setStyleSheet(QString::fromUtf8("#centralWidget{\n"
"border-image:url(:/images/Login_bg.png); }"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(10, 10, 10, 10);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("#formFrame{\n"
"select-color:rgb(85,255,255);\n"
"border:1px solid rgb(24,103,155);\n"
"border-radius:5px;\n"
"background-color:white;}"));
        formLayout_2 = new QFormLayout(widget);
        formLayout_2->setObjectName("formLayout_2");
        label1 = new QLabel(widget);
        label1->setObjectName("label1");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, label1);

        lineEdit_1 = new QLineEdit(widget);
        lineEdit_1->setObjectName("lineEdit_1");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::FieldRole, lineEdit_1);

        label = new QLabel(widget);
        label->setObjectName("label");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::LabelRole, label);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName("lineEdit_2");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::FieldRole, lineEdit_2);


        horizontalLayout->addWidget(widget);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(10, 10, 10, 10);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("border:1px solid rgb(24,103,155);\n"
"border-radius:5px;\n"
"background-color:rgb(124,203,255);\n"
"color:white;"));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 986, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "LoginUI", nullptr));
        label1->setText(QCoreApplication::translate("MainWindow", "\345\270\263\350\231\237\357\274\232", nullptr));
        lineEdit_1->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\242\274\357\274\232", nullptr));
        lineEdit_2->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\205\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
