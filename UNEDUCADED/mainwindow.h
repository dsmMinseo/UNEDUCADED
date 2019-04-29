#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_undoButton_clicked();

    void on_redoButton_clicked();

    void on_moveButton_clicked();

    void on_rotateButton_clicked();

    void on_scaleButton_clicked();

    void on_flipButton_clicked();

    void on_textButton_clicked();

    void on_lengthButton_clicked();

    void on_colorButton_clicked();

    void on_actionOptions_triggered();

    void on_actionSave_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
