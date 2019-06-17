#include "listitem.h"

void ListItem::setItemDefaultInfo(QString name, QPixmap icon)
{
    this->objectName = name;
    this->icon = icon;
}

void ListItem::setItemTransform(std::pair<int, int> pos, float rot, std::pair<int, int> size)
{
    this->position = pos;
    this->rotation = rot;
    this->size = size;
}

void ListItem::setItemColor(QColor color)
{
    this->color = color;
}

void ListItem::showItem(ListItem* item)
{
}
