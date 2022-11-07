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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *headerLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *maintenanceBtn;
    QPushButton *helpBtn;
    QPushButton *contactUsBtn;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(725, 468);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background: #FFFFFF;\n"
"	border-radius: 10px;\n"
"}"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setMaximumSize(QSize(16777215, 66));
        frame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"	background: #D9D9D9;\n"
"	border-radius: 0px 0px 10px 10px;\n"
"}\n"
"\n"
"QPushButton {\n"
"	padding: 10px 23px;\n"
"\n"
"	height: 50%;\n"
"\n"
"	background: #FFFFFF;\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton#helpBtn {\n"
"	width: 30%;\n"
"}\n"
"\n"
"QLabel {\n"
"	font-family: 'Inter';\n"
"	font-style: normal;\n"
"	font-weight: 700;\n"
"	font-size: 20px;\n"
"	line-height: 24px;\n"
"\n"
"	color: #000000;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        headerLabel = new QLabel(frame);
        headerLabel->setObjectName("headerLabel");

        horizontalLayout->addWidget(headerLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        maintenanceBtn = new QPushButton(frame);
        maintenanceBtn->setObjectName("maintenanceBtn");

        horizontalLayout->addWidget(maintenanceBtn);

        helpBtn = new QPushButton(frame);
        helpBtn->setObjectName("helpBtn");

        horizontalLayout->addWidget(helpBtn);

        contactUsBtn = new QPushButton(frame);
        contactUsBtn->setObjectName("contactUsBtn");

        horizontalLayout->addWidget(contactUsBtn);


        verticalLayout->addWidget(frame);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setMinimumSize(QSize(600, 500));
        stackedWidget->setMaximumSize(QSize(1000, 16777215));
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget, 0, Qt::AlignHCenter);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 725, 36));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        headerLabel->setText(QCoreApplication::translate("MainWindow", "nfl almnac", nullptr));
        maintenanceBtn->setText(QCoreApplication::translate("MainWindow", "maintenance", nullptr));
        helpBtn->setText(QCoreApplication::translate("MainWindow", "help", nullptr));
        contactUsBtn->setText(QCoreApplication::translate("MainWindow", "contact us", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
