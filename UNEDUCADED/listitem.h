#ifndef ADDLISTITEM_H
#define ADDLISTITEM_H
#include <QTreeWidget>
#include <QTreeWidgetItem>

class ListItem : QTreeWidgetItem
{
private:
    QString objectName;
    QPixmap icon;
    QColor color;
    std::pair<int, int> position, size;
    float rotation;

public:
    void setItemDefaultInfo(QString name, QPixmap icon);
    void setItemTransform(std::pair<int, int> pos, float rot, std::pair<int, int> size);
    void setItemColor(QColor color);
    void showItem(ListItem* item);
};

#endif // ADDLISTITEM_H
