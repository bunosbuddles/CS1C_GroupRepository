#include "findhelp.h"
#include "ui_findhelp.h"

FindHelp::FindHelp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FindHelp)
{
    ui->setupUi(this);
}

FindHelp::~FindHelp()
{
    delete ui;
}
