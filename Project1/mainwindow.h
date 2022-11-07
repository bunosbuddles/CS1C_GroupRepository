#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_maintenanceBtn_clicked();

    void on_helpBtn_clicked();

    void on_contactUsBtn_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
