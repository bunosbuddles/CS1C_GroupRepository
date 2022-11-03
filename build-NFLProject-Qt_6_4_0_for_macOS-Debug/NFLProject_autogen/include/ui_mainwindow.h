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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *navBarFrame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *headerLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *maintenanceBtn;
    QPushButton *helpBtn;
    QPushButton *contactBtn;
    QFrame *pageMainFrame;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(2352, 1697);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	padding: 0px 0px 20px;\n"
"\n"
"	position: relative;\n"
"	width: 806px;\n"
"	height: 536px;\n"
"\n"
"	background: #FFFFFF;\n"
"	border-radius: 10px;\n"
"}"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        navBarFrame = new QFrame(centralwidget);
        navBarFrame->setObjectName("navBarFrame");
        navBarFrame->setMinimumSize(QSize(0, 0));
        navBarFrame->setMaximumSize(QSize(16777215, 84));
        navBarFrame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"	padding: 15px 0px;\n"
"\n"
"	background: #D9D9D9;\n"
"	border-radius: 0px 0px 10px 10px;\n"
"}\n"
"\n"
"QPushButton {\n"
"	padding: 10px 23px;\n"
"\n"
"	width: 75px;	\n"
"	height: 25px;\n"
"\n"
"	background: #FFFFFF;\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton#helpBtn {\n"
"	width: 40px;\n"
"}\n"
"\n"
"QLabel {\n"
"	width: 102px;\n"
"	height: 24px;\n"
"\n"
"	font-family: 'Inter';\n"
"	font-style: normal;\n"
"	font-weight: 700;\n"
"	font-size: 20px;\n"
"	line-height: 24px;\n"
"\n"
"	color: #000000;\n"
"}"));
        navBarFrame->setFrameShape(QFrame::StyledPanel);
        navBarFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(navBarFrame);
        horizontalLayout_2->setSpacing(15);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(30, 0, 30, 0);
        headerLabel = new QLabel(navBarFrame);
        headerLabel->setObjectName("headerLabel");

        horizontalLayout_2->addWidget(headerLabel);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        maintenanceBtn = new QPushButton(navBarFrame);
        maintenanceBtn->setObjectName("maintenanceBtn");

        horizontalLayout_2->addWidget(maintenanceBtn);

        helpBtn = new QPushButton(navBarFrame);
        helpBtn->setObjectName("helpBtn");

        horizontalLayout_2->addWidget(helpBtn);

        contactBtn = new QPushButton(navBarFrame);
        contactBtn->setObjectName("contactBtn");

        horizontalLayout_2->addWidget(contactBtn);


        verticalLayout->addWidget(navBarFrame);

        pageMainFrame = new QFrame(centralwidget);
        pageMainFrame->setObjectName("pageMainFrame");
        pageMainFrame->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	width: 356px;\n"
"	height: 24px;\n"
"\n"
"	font-family: 'Inter';\n"
"	font-style: normal;\n"
"	font-weight: 700;\n"
"	font-size: 20px;\n"
"	line-height: 24px;\n"
"\n"
"	color: #000000;\n"
"}"));
        pageMainFrame->setFrameShape(QFrame::StyledPanel);
        pageMainFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(pageMainFrame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(350, 150, 350, 200);
        label = new QLabel(pageMainFrame);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        textBrowser = new QTextBrowser(pageMainFrame);
        textBrowser->setObjectName("textBrowser");

        verticalLayout_2->addWidget(textBrowser);


        verticalLayout->addWidget(pageMainFrame);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 2352, 36));
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
        headerLabel->setText(QCoreApplication::translate("MainWindow", "nfl almnac", nullptr));
        maintenanceBtn->setText(QCoreApplication::translate("MainWindow", "maintenance", nullptr));
        helpBtn->setText(QCoreApplication::translate("MainWindow", "help", nullptr));
        contactBtn->setText(QCoreApplication::translate("MainWindow", "contact us", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "instructions for usage", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:15px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Open Sans','Arial','sans-serif'; font-size:14pt; color:#000000; background-color:#ffffff;\">Lorem ipsum dolor sit amet, consectetur adipiscing elit. Duis maximus ipsum sed nisi mollis, id consectetur tortor maximus. Aliquam semper, urna eget malesuada feugiat, tortor lorem tincidunt libero, vitae facilisis ex arcu et turpis. Pellentesque vel facilisis tortor. Proin venenatis ornare sem a fermentum. Donec quam velit, vestibulum ut ur"
                        "na eget, imperdiet gravida eros. Duis nunc nibh, sollicitudin eget porttitor at, interdum ut lorem. Nulla efficitur enim lacus, ac vestibulum velit fermentum a. Aenean consectetur neque metus, id tempus odio faucibus at. Aliquam fermentum porttitor cursus. Mauris dignissim odio sed blandit dignissim.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:15px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Open Sans','Arial','sans-serif'; font-size:14pt; color:#000000; background-color:#ffffff;\">Suspendisse id metus dapibus, maximus ipsum sed, tincidunt mi. Aliquam elementum purus eu arcu consequat mollis ut id lacus. Morbi est turpis, lobortis id orci a, tempus elementum urna. Nullam nulla dui, vulputate consequat quam id, feugiat venenatis ipsum. Curabitur ornare commodo efficitur. Sed ultrices ultricies mauris, at faucibus felis pellentesque eu. Aliquam eu quam consectetur, pellentesque tellus vel, varius dolor. Pellentesque"
                        " habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas.</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
