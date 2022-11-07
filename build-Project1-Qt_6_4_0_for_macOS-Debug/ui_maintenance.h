/********************************************************************************
** Form generated from reading UI file 'maintenance.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTENANCE_H
#define UI_MAINTENANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Maintenance
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *adminHeaderLabel;
    QLineEdit *usernameLineEdit;
    QLineEdit *emailLineEdit;
    QPushButton *loginBtn;

    void setupUi(QWidget *Maintenance)
    {
        if (Maintenance->objectName().isEmpty())
            Maintenance->setObjectName("Maintenance");
        Maintenance->resize(400, 300);
        Maintenance->setMaximumSize(QSize(16777215, 300));
        Maintenance->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	width: 209px;\n"
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
"	background: #FFFFFF;\n"
"	border: 1px solid #785B5B;\n"
"	border-radius: 5px;\n"
"	width: 209px;\n"
"	height: 38px;\n"
"}\n"
"\n"
"QPushButton {\n"
"	background: #D9D9D9;\n"
"	border-radius: 5px;\n"
"	width: 80px;\n"
"	height: 38px;\n"
"}"));
        verticalLayout = new QVBoxLayout(Maintenance);
        verticalLayout->setObjectName("verticalLayout");
        adminHeaderLabel = new QLabel(Maintenance);
        adminHeaderLabel->setObjectName("adminHeaderLabel");
        adminHeaderLabel->setMaximumSize(QSize(16777215, 40));
        adminHeaderLabel->setMargin(0);

        verticalLayout->addWidget(adminHeaderLabel, 0, Qt::AlignHCenter);

        usernameLineEdit = new QLineEdit(Maintenance);
        usernameLineEdit->setObjectName("usernameLineEdit");

        verticalLayout->addWidget(usernameLineEdit, 0, Qt::AlignHCenter);

        emailLineEdit = new QLineEdit(Maintenance);
        emailLineEdit->setObjectName("emailLineEdit");

        verticalLayout->addWidget(emailLineEdit, 0, Qt::AlignHCenter);

        loginBtn = new QPushButton(Maintenance);
        loginBtn->setObjectName("loginBtn");

        verticalLayout->addWidget(loginBtn, 0, Qt::AlignHCenter);


        retranslateUi(Maintenance);

        QMetaObject::connectSlotsByName(Maintenance);
    } // setupUi

    void retranslateUi(QWidget *Maintenance)
    {
        Maintenance->setWindowTitle(QCoreApplication::translate("Maintenance", "Form", nullptr));
        adminHeaderLabel->setText(QCoreApplication::translate("Maintenance", "admin", nullptr));
        usernameLineEdit->setPlaceholderText(QCoreApplication::translate("Maintenance", "username", nullptr));
        emailLineEdit->setText(QString());
        emailLineEdit->setPlaceholderText(QCoreApplication::translate("Maintenance", "email", nullptr));
        loginBtn->setText(QCoreApplication::translate("Maintenance", "login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Maintenance: public Ui_Maintenance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTENANCE_H
