#ifndef SPAWNARROW_H
#define SPAWNARROW_H
#include <QObject>
#include <QGraphicsPixmapItem>

class SpawnArrow: public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public slots:
    void spawnArrow();
};

#endif // SPAWNARROW_H
