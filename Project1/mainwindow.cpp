#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "help.h"
#include "contactus.h"
#include "maintenance.h"
#include "list.h"
#include "filehandler.h"
#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    List *listPage = new List(parent);
    ui->stackedWidget->insertWidget(0,listPage);

    Maintenance *maintenancePage = new Maintenance(parent);
    ui->stackedWidget->insertWidget(1, maintenancePage);

    Help *helpPage = new Help(parent);
    ui->stackedWidget->insertWidget(2, helpPage);

    ContactUs *contactUsPage = new ContactUs(parent);
    ui->stackedWidget->insertWidget(3, contactUsPage);

    ui->stackedWidget->setCurrentIndex(0);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_maintenanceBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_helpBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_contactUsBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

