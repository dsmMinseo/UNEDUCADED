#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMainWindow::showMaximized();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_undoButton_clicked()
{

}


void MainWindow::on_redoButton_clicked()
{

}

void MainWindow::on_moveButton_clicked()
{

}

void MainWindow::on_rotateButton_clicked()
{

}

void MainWindow::on_scaleButton_clicked()
{

}

void MainWindow::on_flipButton_clicked()
{

}

void MainWindow::on_textButton_clicked()
{

}

void MainWindow::on_lengthButton_clicked()
{

}

void MainWindow::on_colorButton_clicked()
{

}
