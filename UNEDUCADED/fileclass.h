#ifndef FILECLASS_H
#define FILECLASS_H

#include <QPdfWriter>
#include <QFileDialog>
#include <QTranslator>
#include <QPainter>
#include <QDir>

class FileClass
{
public:
    FileClass(QWidget& widget);

    static int fileSave(QWidget* widget);

private:
    QWidget* widget;
    QDir dir;
};

#endif // FILECLASS_H
