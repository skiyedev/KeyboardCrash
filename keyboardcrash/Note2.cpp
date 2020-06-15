#include "Note2.h"
#include "Score.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>

extern Score * score;

Note2::Note2(): QObject(), QGraphicsPixmapItem() {
    setPixmap(QPixmap(":/Textures/NoteDown.png"));
    setPos(100,0);
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(4);
}

void Note2::move() {
    setPos(x(),y()+8);
    if (pos().y() > scene()->height()) {
        scene()->removeItem(this);
        delete this;
        score->decrease();
    }
}
