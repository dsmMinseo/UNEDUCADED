#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "fileclass.h"
#include <iostream>
#include <QFontDialog>
#include <QFont>
#include <QMdiArea>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
//    ui->subwindow->setWindowFlags(Qt::WindowTitleHint);
    QWidget::setWindowTitle("UNEDUCADED");
    QMainWindow::showMaximized();
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_undoButton_clicked()
{
;
}


void MainWindow::on_redoButton_clicked()
{
;
}

void MainWindow::on_moveButton_clicked()
{
;
}

void MainWindow::on_rotateButton_clicked()
{
;
}

void MainWindow::on_scaleButton_clicked()
{
;
}

void MainWindow::on_flipButton_clicked()
{
;
}

void MainWindow::on_textButton_clicked()
{
;
}

void MainWindow::on_lengthButton_clicked()
{
;
}

void MainWindow::on_colorButton_clicked()
{
;
}

void MainWindow::on_actionFont_triggered()
{
    MainWindow::setFont(QFontDialog::getFont(nullptr, MainWindow::font()));
}

void MainWindow::on_actionSave_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this,
                       "Save File", "",
                       "PDF File (*.pdf);;All Files(*)");

    QPdfWriter pdfWriter(fileName);
    pdfWriter.setPageSize(QPageSize(QPageSize::A4));

}
