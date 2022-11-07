/********************************************************************************
** Form generated from reading UI file 'contactus.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTUS_H
#define UI_CONTACTUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ContactUs
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *ContactUs)
    {
        if (ContactUs->objectName().isEmpty())
            ContactUs->setObjectName("ContactUs");
        ContactUs->resize(400, 300);
        ContactUs->setStyleSheet(QString::fromUtf8("QLabel {\n"
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
"QLineEdit {\n"
"	padding: 10px;\n"
"	width: 356px;\n"
"	height: 38px;\n"
"\n"
"	background: #D9D9D9;\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"QPlainTextEdit {\n"
"	padding: 10px;\n"
"\n"
"	width: 356px;\n"
"	height: 217px;\n"
"\n"
"	background: #D9D9D9;\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton {\n"
"	padding: 10px 23px;\n"
"\n"
"	width: 94px;\n"
"	height: 38px;\n"
"\n"
"	background: #D9D9D9;\n"
"	border-radius: 5px;\n"
"}"));
        verticalLayout = new QVBoxLayout(ContactUs);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(ContactUs);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(ContactUs);
        lineEdit->setObjectName("lineEdit");

        verticalLayout->addWidget(lineEdit);

        plainTextEdit = new QPlainTextEdit(ContactUs);
        plainTextEdit->setObjectName("plainTextEdit");

        verticalLayout->addWidget(plainTextEdit);

        pushButton = new QPushButton(ContactUs);
        pushButton->setObjectName("pushButton");
        pushButton->setMaximumSize(QSize(300, 16777215));

        verticalLayout->addWidget(pushButton, 0, Qt::AlignHCenter);


        retranslateUi(ContactUs);

        QMetaObject::connectSlotsByName(ContactUs);
    } // setupUi

    void retranslateUi(QDialog *ContactUs)
    {
        ContactUs->setWindowTitle(QCoreApplication::translate("ContactUs", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ContactUs", "contact us", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("ContactUs", "email", nullptr));
        plainTextEdit->setPlainText(QString());
        plainTextEdit->setPlaceholderText(QCoreApplication::translate("ContactUs", "message", nullptr));
        pushButton->setText(QCoreApplication::translate("ContactUs", "submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ContactUs: public Ui_ContactUs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTUS_H
