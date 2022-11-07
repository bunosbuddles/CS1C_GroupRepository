#ifndef MAINTENANCE_H
#define MAINTENANCE_H

#include <QWidget>

namespace Ui {
class Maintenance;
}

class Maintenance : public QWidget
{
    Q_OBJECT

public:
    explicit Maintenance(QWidget *parent = nullptr);
    ~Maintenance();

private:
    Ui::Maintenance *ui;
};

#endif // MAINTENANCE_H
