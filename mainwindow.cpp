#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_pushButton_clicked()
{
    ui->lineEdit->setText("Kółko");
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit->setText("Krzyżyk");
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->lineEdit_2->setText("Kółko");
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->lineEdit_2->setText("Krzyżyk");
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->lineEdit_3->setText("Kółko");
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->lineEdit_3->setText("Krzyżyk");
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->lineEdit_4->setText("Kółko");
}

void MainWindow::on_pushButton_8_clicked()
{
    ui->lineEdit_4->setText("Krzyżyk");
}

void MainWindow::on_pushButton_9_clicked()
{
    ui->lineEdit_5->setText("Kółko");
}

void MainWindow::on_pushButton_11_clicked()
{
    ui->lineEdit_5->setText("Krzyżyk");
}

void MainWindow::on_pushButton_10_clicked()
{
    ui->lineEdit_6->setText("Kółko");
}

void MainWindow::on_pushButton_12_clicked()
{
    ui->lineEdit_6->setText("Krzyżyk");
}

void MainWindow::on_pushButton_13_clicked()
{
    ui->lineEdit_7->setText("Kółko");
}

void MainWindow::on_pushButton_16_clicked()
{
    ui->lineEdit_7->setText("Krzyżyk");
}

void MainWindow::on_pushButton_14_clicked()
{
    ui->lineEdit_8->setText("Kółko");
}

void MainWindow::on_pushButton_17_clicked()
{
    ui->lineEdit_8->setText("Krzyżyk");
}

void MainWindow::on_pushButton_15_clicked()
{
    ui->lineEdit_9->setText("Kółko");
}

void MainWindow::on_pushButton_18_clicked()
{
    ui->lineEdit_9->setText("Krzyżyk");
}

void MainWindow::on_pushButton_19_clicked()
{
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
    ui->lineEdit_3->setText("");
    ui->lineEdit_4->setText("");
    ui->lineEdit_5->setText("");
    ui->lineEdit_6->setText("");
    ui->lineEdit_7->setText("");
    ui->lineEdit_8->setText("");
    ui->lineEdit_9->setText("");
}
