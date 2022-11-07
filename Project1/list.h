#ifndef LIST_H
#define LIST_H

#include <QWidget>
#include "team.h"

namespace Ui {
class List;
}

class List : public QWidget
{
    Q_OBJECT

public:
    explicit List(QWidget *parent = nullptr);
    ~List();
    void addItem(Team team);

private:
    Ui::List *ui;
};

#endif // LIST_H
