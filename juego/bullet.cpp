#include "bullet.h"
#include <QDebug>

Bullet::Bullet()
{
    setPixmap(QPixmap(":/imagenes/bullet.jpg").scaled(10,50));

    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);
}

Bullet::~Bullet()
{
    delete timer;
}

void Bullet::move()
{
    //mover la bala hacia arriba
    setPos(x(),y()-10);
    //eliminar la bala
    if(pos().y() < 0){
        scene()->removeItem(this);
        delete this;
        qDebug() << "Bala eliminada";
    }
}
