#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    int currentRow = 0;

private slots:
    void digits_numbers();
    void on_pushButton_point_clicked();
    void operations();
    void on_pushButtonAC_clicked();
    void math_operations();
    void on_pushButton_equally_clicked();
    void on_pushButton_load_clicked();
};
#endif // MAINWINDOW_H
