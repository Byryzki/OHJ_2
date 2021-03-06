#ifndef MAINWINDOW_HH
#define MAINWINDOW_HH

#include <QMainWindow>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    // Normally this member should be in private part of the
    // class, but due to the automated tests it must be more
    // accessible.
    QTimer* timer;

private slots:
    // Add your slots here

    void on_timer_timeout();
    void on_start_button_clicked();
    void on_stop_button_clicked();
    void on_reset_button_clicked();
    void on_close_button_clicked();

private:
    void updatedisplay(int min, int sec);
    Ui::MainWindow *ui;
    // Add other necessary members here
};

#endif // MAINWINDOW_HH
