#include "Note4.h"
#include "Score.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>

extern Score * score;

Note4::Note4(): QObject(), QGraphicsPixmapItem() {
    setPixmap(QPixmap(":/Textures/NoteRight.png"));
    setPos(300,0);
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(4);
}

void Note4::move() {
    setPos(x(),y()+8);
    if (pos().y() > scene()->height()) {
        scene()->removeItem(this);
        delete this;
        score->decrease();
    }
}
