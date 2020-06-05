#include "Note4.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>

Note4::Note4(): QObject(), QGraphicsPixmapItem()
{
    setPixmap(QPixmap(":/Textures/NoteRight.png"));
    setPos(300,0);
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(4);
}

void Note4::move()
{
    setPos(x(),y()+8);
    if(pos().y() > 900)
    {
        scene()->removeItem(this);
        delete this;
    }
}
