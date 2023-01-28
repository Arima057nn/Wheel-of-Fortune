#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "string.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


QString txt1 = "HAPPYNEWYEAR";
QString txt2 = "************";
void MainWindow::on_btn_Q_clicked()
{
    ui->TextInput->setText("Q");

}


void MainWindow::on_btn_W_clicked()
{
    ui->TextInput->setText("W");
}


void MainWindow::on_btn_E_clicked()
{
    ui->TextInput->setText("E");
}


void MainWindow::on_btn_R_clicked()
{
    ui->TextInput->setText("R");
}


void MainWindow::on_btn_T_clicked()
{
    ui->TextInput->setText("T");
}


void MainWindow::on_btn_Y_clicked()
{
    ui->TextInput->setText("Y");
}


void MainWindow::on_btn_U_clicked()
{
    ui->TextInput->setText("U");
}


void MainWindow::on_btn_I_clicked()
{
    ui->TextInput->setText("I");
}


void MainWindow::on_btn_O_clicked()
{
    ui->TextInput->setText("O");
}


void MainWindow::on_btn_P_clicked()
{
    ui->TextInput->setText("P");
}


void MainWindow::on_btn_A_clicked()
{
    ui->TextInput->setText("A");
}




void MainWindow::on_btn_S_clicked()
{
    ui->TextInput->setText("S");
}


void MainWindow::on_btn_D_clicked()
{
    ui->TextInput->setText("D");
}


void MainWindow::on_btn_F_clicked()
{
    ui->TextInput->setText("F");
}


void MainWindow::on_btn_G_clicked()
{
    ui->TextInput->setText("G");
}


void MainWindow::on_btn_H_clicked()
{
    ui->TextInput->setText("H");
}


void MainWindow::on_btn_J_clicked()
{
    ui->TextInput->setText("J");
}


void MainWindow::on_btn_K_clicked()
{
    ui->TextInput->setText("K");
}


void MainWindow::on_btn_L_clicked()
{
    ui->TextInput->setText("L");
}


void MainWindow::on_btn_Z_clicked()
{
    ui->TextInput->setText("Z");
}


void MainWindow::on_btn_X_clicked()
{
    ui->TextInput->setText("X");
}


void MainWindow::on_btn_C_clicked()
{
    ui->TextInput->setText("C");
}


void MainWindow::on_btn_V_clicked()
{
    ui->TextInput->setText("V");
}


void MainWindow::on_btn_B_clicked()
{
    ui->TextInput->setText("B");
}


void MainWindow::on_btn_N_clicked()
{
    ui->TextInput->setText("N");
}


void MainWindow::on_btn_M_clicked()
{
    ui->TextInput->setText("M");
}


void MainWindow::on_pushButton_14_clicked()
{


    QString c = ui->TextInput->toPlainText();

    for(int i = 0; i < 12; i++){
        if(c[0] == txt1[i]) txt2[i] = c[0];
    }
    ui->lb_text->setText(txt2);



}


void MainWindow::on_pushButton_13_clicked()
{
    ui->lb_text->setText(txt2);
}

