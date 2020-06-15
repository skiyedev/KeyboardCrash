#include "Note1.h"
#include "Score.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>


extern Score * score;

Note1::Note1(): QObject(), QGraphicsPixmapItem() {
    setPixmap(QPixmap(":/Textures/NoteLeft.png"));
    setPos(0,0);
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(4); // frame time
}

void Note1::move() {
    setPos(x(),y()+8);
    if (pos().y() > scene()->height()) {
        scene()->removeItem(this);
        delete this;
        score->decrease();
    }
}
