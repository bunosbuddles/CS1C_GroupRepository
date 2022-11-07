#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "help.h"
#include "contactus.h"
#include "maintenance.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Maintenance *maintenancePage = new Maintenance(parent);
    ui->stackedWidget->insertWidget(0, maintenancePage);

    Help *helpPage = new Help(parent);
    ui->stackedWidget->insertWidget(1, helpPage);

    ContactUs *contactUsPage = new ContactUs(parent);
    ui->stackedWidget->insertWidget(2, contactUsPage);

    ui->stackedWidget->setCurrentIndex(1);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_maintenanceBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_helpBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_contactUsBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

