#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "contactus.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButton_3_clicked()
{
    ContactUs contactPage;
    contactPage.setModal(true);
    contactPage.exec();
}

