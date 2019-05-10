#include "dialog.h"
#include "customqgraphicsscene.h"
#include <QVBoxLayout>
#include <QGraphicsView>

Dialog::Dialog(QWidget *parent)
: QDialog(parent)
{
   scene = new CustomQGraphicsScene(this);
   view = new QGraphicsView(scene,this);
   layout = new QVBoxLayout(this);
   layout->addWidget(view);
   setLayout(layout);
   resize(1280,720);
}

Dialog::~Dialog()
{
   delete scene;
   delete view;
}
