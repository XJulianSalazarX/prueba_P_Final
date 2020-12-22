#ifndef CHARACTER_H
#define CHARACTER_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include <QGraphicsScene>


class Character: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Character();
};

#endif // CHARACTER_H
