#include "Note3.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>

Note3::Note3(): QObject(), QGraphicsPixmapItem()
{
    setPixmap(QPixmap(":/Textures/NoteUp.png"));
    setPos(200,0);
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(4);
}

void Note3::move()
{
    setPos(x(),y()+8);
    if(pos().y() > 900)
    {
        scene()->removeItem(this);
        delete this;
    }
}
