#ifndef FINDHELP_H
#define FINDHELP_H

#include <QWidget>

namespace Ui {
class FindHelp;
}

class FindHelp : public QWidget
{
    Q_OBJECT

public:
    explicit FindHelp(QWidget *parent = nullptr);
    ~FindHelp();

private:
    Ui::FindHelp *ui;
};

#endif // FINDHELP_H
