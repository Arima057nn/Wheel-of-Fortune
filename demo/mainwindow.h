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


    void on_pushButton_14_clicked();

    void on_pushButton_13_clicked();



    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

     void on_btn_exit_clicked();

    void on_btn_Q_2_clicked();

    void on_btn_W_2_clicked();

    void on_btn_E_2_clicked();

    void on_btn_R_2_clicked();

    void on_btn_T_2_clicked();

    void on_btn_Y_2_clicked();

    void on_btn_U_2_clicked();

    void on_btn_I_2_clicked();

    void on_btn_O_2_clicked();

    void on_btn_P_2_clicked();

    void on_btn_A_2_clicked();

    void on_btn_S_2_clicked();

    void on_btn_D_2_clicked();

    void on_btn_F_2_clicked();

    void on_btn_G_2_clicked();

    void on_btn_H_2_clicked();

    void on_btn_J_2_clicked();

    void on_btn_K_2_clicked();

    void on_btn_L_2_clicked();

    void on_btn_Z_2_clicked();

    void on_btn_X_2_clicked();

    void on_btn_C_2_clicked();

    void on_btn_V_2_clicked();

    void on_btn_B_2_clicked();

    void on_btn_N_2_clicked();

    void on_btn_M_2_clicked();



    void on_btn_return_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
