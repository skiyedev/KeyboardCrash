#include "Note2.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>

Note2::Note2(): QObject(), QGraphicsPixmapItem()
{
    setPixmap(QPixmap(":/Textures/NoteDown.png"));
    setPos(100,0);
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(4);
}

void Note2::move()
{
    setPos(x(),y()+8);
    if(pos().y() > 900)
    {
        scene()->removeItem(this);
        delete this;
    }
}
