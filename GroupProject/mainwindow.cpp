#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "team.h"
#include "filehandler.h"
#include "contactus.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    Team teams[32];
    readFile(teams);
    ui->setupUi(this);
    for(int i=0; i < 32; i++)
    {
        ui->listWidget->addItem(QString::fromStdString(teams[i].name));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_contactBtn_clicked()
{
    ContactUs contactPage;
    contactPage.setModal(true);
    contactPage.exec();
}

