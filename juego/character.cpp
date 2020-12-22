#include "character.h"

Character::Character()
{
    setPixmap(QPixmap(":/imagenes/carrito_bueno.png"));
}

void Character::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_W and y()>360){
        setPos(x(),y()-5);
    }
    else if(event->key() == Qt::Key_S and y()+200<720){
        setPos(x(),y()+5);
    }
    else if(event->key() == Qt::Key_A and x()>140){
        setPos(x()-5,y());
    }
    else if(event->key() == Qt::Key_D and x()+100<1140){
        setPos(x()+5,y());
    }
}
