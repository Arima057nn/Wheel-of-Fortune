#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "string.h"
#include <QPixmap>
#include "cstdlib"
#include "QMessageBox"
#include "QRandomGenerator"
#include "QPainter"
#include "QTransform"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap img("C:/Users/tjend/Downloads/chiecnon.png");
    ui->lb_img->setPixmap(img.scaled(200,200,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

int value = 0;
QString txt1 = "HAPPYNEWYEAR";
QString txt2 = "************";

void MainWindow::on_pushButton_14_clicked()
{

    QString c = ui->TextInput->toPlainText();
    int count = 0;
    if(c == "") c = "?";
    for(int i = 0; i < 12; i++){
        if(c[0] == txt1[i]){
            count++;
            txt2[i] = c[0];
        }

    }
    if(count == 0) QMessageBox::about(this, "Thong bao", "Ban khong doan dung o nao");
    if(count > 0) QMessageBox::about(this, "Thong bao", "Ban doan dung o" + count);

    ui->lb_text->setText(txt2);
}

int counter = 15;

void MainWindow::on_pushButton_13_clicked()
{


//    QPixmap rotate(img.size());
//    QPainter p(&rotate);
//    p.setRenderHint(QPainter::Antialiasing);
//    p.setRenderHint(QPainter::SmoothPixmapTransform);
////    p.setRenderHint(QPainter::);
//    p.translate(rotate.size().width() / 2, rotate.size().height() / 2);
//    p.rotate(counter);
//    p.translate(-rotate.size().width() / 2, -rotate.size().height() / 2);
//    p.drawPixmap(0,0,img);
//    p.end();
//    ui->lb_img->setPixmap(img.scaled(200,200,Qt::KeepAspectRatio));

    std::uniform_int_distribution<int> distribution(0,360);
    int value = distribution(*QRandomGenerator::global());
//    value = 180;
    QPixmap img("C:/Users/tjend/Downloads/chiecnon.png");
    QTransform tr;
    tr.rotate(value);
    img = img.transformed(tr);
    ui->lb_img->setPixmap(img.scaled(200,200,Qt::KeepAspectRatio));
    if(value == 0){
        QMessageBox::about(this, "Thong bao", "Ban da trung 10 ti");
    }
    else if(value == 180){
        QMessageBox::about(this, "Thong bao", "Ban da quay vao o mat luot");
        ui->pushButton_14->setEnabled(false);
    }
    else if(value == 240){
        QMessageBox::about(this, "Thong bao", "Ban da quay duoc 100 diem. Moi ban nhap chu");

    }else{
        ui->pushButton_14->setEnabled(true);
        QMessageBox::about(this, "Thong bao", "Ban da quay duoc 200 diem. Moi ban nhap chu");
        int point = ui->point_pl1->toPlainText().toInt();
        point += 100;
        QString p = QString::number(point);
        ui->pushButton_14->setEnabled(true);
    }

}



void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);

    ui->lb_name->setText( ui->input_name->toPlainText());
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->pushButton_14->setEnabled(false);
}


void MainWindow::on_btn_exit_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}




void MainWindow::on_btn_Q_2_clicked()
{
    ui->TextInput->setText("Q");
}


void MainWindow::on_btn_W_2_clicked()
{
    ui->TextInput->setText("W");
}


void MainWindow::on_btn_E_2_clicked()
{
    ui->TextInput->setText("E");
}


void MainWindow::on_btn_R_2_clicked()
{
    ui->TextInput->setText("R");
}


void MainWindow::on_btn_T_2_clicked()
{
    ui->TextInput->setText("T");
}


void MainWindow::on_btn_Y_2_clicked()
{
    ui->TextInput->setText("Y");
}


void MainWindow::on_btn_U_2_clicked()
{
    ui->TextInput->setText("U");
}


void MainWindow::on_btn_I_2_clicked()
{
    ui->TextInput->setText("I");
}


void MainWindow::on_btn_O_2_clicked()
{
    ui->TextInput->setText("O");
}


void MainWindow::on_btn_P_2_clicked()
{
    ui->TextInput->setText("P");
}


void MainWindow::on_btn_A_2_clicked()
{
    ui->TextInput->setText("A");
}


void MainWindow::on_btn_S_2_clicked()
{
    ui->TextInput->setText("S");
}


void MainWindow::on_btn_D_2_clicked()
{
    ui->TextInput->setText("D");
}


void MainWindow::on_btn_F_2_clicked()
{
    ui->TextInput->setText("F");
}


void MainWindow::on_btn_G_2_clicked()
{
    ui->TextInput->setText("G");
}


void MainWindow::on_btn_H_2_clicked()
{
    ui->TextInput->setText("H");
}


void MainWindow::on_btn_J_2_clicked()
{
    ui->TextInput->setText("J");
}


void MainWindow::on_btn_K_2_clicked()
{
    ui->TextInput->setText("K");
}


void MainWindow::on_btn_L_2_clicked()
{
    ui->TextInput->setText("L");
}


void MainWindow::on_btn_Z_2_clicked()
{
    ui->TextInput->setText("Z");
}


void MainWindow::on_btn_X_2_clicked()
{
    ui->TextInput->setText("X");
}


void MainWindow::on_btn_C_2_clicked()
{
    ui->TextInput->setText("C");
}


void MainWindow::on_btn_V_2_clicked()
{
    ui->TextInput->setText("V");
}


void MainWindow::on_btn_B_2_clicked()
{
    ui->TextInput->setText("B");
}


void MainWindow::on_btn_N_2_clicked()
{
    ui->TextInput->setText("N");
}


void MainWindow::on_btn_M_2_clicked()
{
    ui->TextInput->setText("M");
}




void MainWindow::on_btn_return_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

}


void MainWindow::on_pushButton_clicked()
{
    std::uniform_int_distribution<int> distribution(0,10);
    double value = distribution(*QRandomGenerator::global());
    if(value == 0){
        QMessageBox::about(this, "hehe", "haha");
    }


}

