#ifndef DIALOG_H
#define DIALOG_H

#include <QWidget>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QPixmap>
#include <QLine>
#include <QDialog>

namespace Ui {
}

class Dialog : public QDialog
{
    Q_OBJECT
public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

signals:

public slots:

protected:
    void mouseMoveEvent(QMouseEvent *);
    void mousePressEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);
    void paintEvent(QPaintEvent *);
private:
    QLine m_line;
    QPixmap m_nPTargetPixmap;
    bool m_nbMousePressed;
};

#endif // PAINTWIDGET_H

//#ifndef DIALOG_H
//#define DIALOG_H
//#include <QDialog>

//class CustomQGraphicsScene;
//class QGraphicsView;
//class QVBoxLayout;

//class Dialog : public QDialog
//{
//   Q_OBJECT
//public:
//   Dialog(QWidget *parent = nullptr);
//   ~Dialog();
//private:
//   CustomQGraphicsScene* scene;
//   QGraphicsView* view;
//   QVBoxLayout* layout;
//};

//#endif // DIALOG_H
