#ifndef DIALOG_H
#define DIALOG_H
#include <QDialog>

class CustomQGraphicsScene;
class QGraphicsView;
class QVBoxLayout;

class Dialog : public QDialog
{
   Q_OBJECT
public:
   Dialog(QWidget *parent = nullptr);
   ~Dialog();
private:
   CustomQGraphicsScene* scene;
   QGraphicsView* view;
   QVBoxLayout* layout;
};

#endif // DIALOG_H
