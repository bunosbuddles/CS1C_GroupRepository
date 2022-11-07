#include "list.h"
#include "ui_list.h"
#include "team.h"
#include "filehandler.h"

List::List(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::List)
{

    ui->setupUi(this);
    Team teams[32];
    readFile(teams);
    for (int i = 0; i < 32; i++)
    {
        ui->listWidget->addItem(QString::fromStdString(teams[i].name));
    }
}

List::~List()
{

    delete ui;
}

void List::addItem(Team team)
{
    ui->listWidget->addItem(QString::fromStdString(team.name));
}
