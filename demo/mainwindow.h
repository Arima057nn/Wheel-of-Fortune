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
    void on_btn_Q_clicked();



    void on_btn_W_clicked();

    void on_btn_E_clicked();

    void on_btn_R_clicked();

    void on_btn_T_clicked();

    void on_btn_Y_clicked();

    void on_btn_U_clicked();

    void on_btn_I_clicked();

    void on_btn_O_clicked();

    void on_btn_P_clicked();

    void on_btn_A_clicked();



    void on_btn_S_clicked();

    void on_btn_D_clicked();

    void on_btn_F_clicked();

    void on_btn_G_clicked();

    void on_btn_H_clicked();

    void on_btn_J_clicked();

    void on_btn_K_clicked();

    void on_btn_L_clicked();

    void on_btn_Z_clicked();

    void on_btn_X_clicked();

    void on_btn_C_clicked();

    void on_btn_V_clicked();

    void on_btn_B_clicked();

    void on_btn_N_clicked();

    void on_btn_M_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_13_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
