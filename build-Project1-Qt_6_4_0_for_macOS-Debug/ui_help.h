/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Help
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *Help)
    {
        if (Help->objectName().isEmpty())
            Help->setObjectName("Help");
        Help->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Help->sizePolicy().hasHeightForWidth());
        Help->setSizePolicy(sizePolicy);
        Help->setMaximumSize(QSize(16777215, 16777215));
        Help->setStyleSheet(QString::fromUtf8("QLabel {\n"
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
"}\n"
"\n"
"QTextBrowser {\n"
"	background-color: rgba(0,0,0,0);\n"
"}"));
        verticalLayout = new QVBoxLayout(Help);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(Help);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        textBrowser = new QTextBrowser(Help);
        textBrowser->setObjectName("textBrowser");

        verticalLayout->addWidget(textBrowser);


        retranslateUi(Help);

        QMetaObject::connectSlotsByName(Help);
    } // setupUi

    void retranslateUi(QWidget *Help)
    {
        Help->setWindowTitle(QCoreApplication::translate("Help", "Form", nullptr));
        label->setText(QCoreApplication::translate("Help", "instructions for usage", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Help", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Open Sans','Arial','sans-serif'; font-size:14pt; color:#000000; background-color:#ffffff;\">Lorem ipsum dolor sit amet, consectetur adipiscing elit. Duis maximus ipsum sed nisi mollis, id consectetur tortor maximus. Aliquam semper, urna eget malesuada feugiat, tortor lorem tincidunt libero, vitae facilisis ex arcu et turpis. Pellentesque vel facilisis tortor. Proin venenatis ornare sem a fermentum. Donec quam velit, vestibulum ut urna eget, imperdiet gravida "
                        "eros. Duis nunc nibh, sollicitudin eget porttitor at, interdum ut lorem. Nulla efficitur enim lacus, ac vestibulum velit fermentum a. Aenean consectetur neque metus, id tempus odio faucibus at. Aliquam fermentum porttitor cursus. Mauris dignissim odio sed blandit dignissim.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:15px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Open Sans','Arial','sans-serif'; font-size:14pt; color:#000000; background-color:#ffffff;\">Suspendisse id metus dapibus, maximus ipsum sed, tincidunt mi. Aliquam elementum purus eu arcu consequat mollis ut id lacus. Morbi est turpis, lobortis id orci a, tempus elementum urna. Nullam nulla dui, vulputate consequat quam id, feugiat venenatis ipsum. Curabitur ornare commodo efficitur. Sed ultrices ultricies mauris, at faucibus felis pellentesque eu. Aliquam eu quam consectetur, pellentesque tellus vel, varius dolor. Pellentesque habitant morbi tristique s"
                        "enectus et netus et malesuada fames ac turpis egestas.</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Help: public Ui_Help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
