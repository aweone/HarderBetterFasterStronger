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

    void on_workIt_clicked();

    void on_makeIt_clicked();

    void on_doIt_clicked();

    void on_makeUs_clicked();

    void on_harder_clicked();

    void on_better_clicked();

    void on_faster_clicked();

    void on_stronger_clicked();

    void on_moreThan_clicked();

    void on_hour_clicked();

    void on_our_clicked();

    void on_never_clicked();

    void on_ever_clicked();

    void on_after_clicked();

    void on_workIs_clicked();

    void on_over_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
