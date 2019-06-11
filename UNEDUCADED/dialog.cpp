#include "dialog.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QDebug>

Dialog::Dialog(QWidget *parent) : QDialog(parent)
{
    m_nPTargetPixmap.fill();
    m_nbMousePressed = false;
}

Dialog::~Dialog()
{
//    delete ui;
}

void Dialog::mousePressEvent(QMouseEvent* event)
{
    m_nbMousePressed = true;
    m_line.setP1(event->pos());
    m_line.setP2(event->pos());
}

void Dialog::mouseReleaseEvent(QMouseEvent *event)
{
    m_nbMousePressed = false;
    update();
}

void Dialog::paintEvent(QPaintEvent *e)
{
    static bool wasPressed = false;
    QPainter painter(this);

    if(m_nbMousePressed)
    {
        painter.drawPixmap(0, 0, m_nPTargetPixmap);
        painter.drawLine(m_line);
        wasPressed = true;
    }
    else if(wasPressed)
    {
        QPainter PixmapPainter(&m_nPTargetPixmap);
        QPen pen(Qt::black);
        PixmapPainter.setPen(pen);
        PixmapPainter.drawLine(m_line);

        painter.drawPixmap(0, 0, m_nPTargetPixmap);
        wasPressed = false;
    }
}

void Dialog::mouseMoveEvent(QMouseEvent *event)
{
    if (event->type() == QEvent::MouseMove)
    {
        m_line.setP2(event->pos());
    }
    update();
}

//#include "dialog.h"
//#include "customqgraphicsscene.h"
//#include <QVBoxLayout>
//#include <QGraphicsView>

//Dialog::Dialog(QWidget *parent)
//: QDialog(parent)
//{
//   scene = new CustomQGraphicsScene(this);
//   view = new QGraphicsView(scene,this);
//   layout = new QVBoxLayout(this);
//   layout->addWidget(view);
//   setLayout(layout);
//   resize(1280,720);
//}

//Dialog::~Dialog()
//{
//   delete scene;
//   delete view;
//}
