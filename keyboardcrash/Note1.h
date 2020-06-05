#ifndef NOTE1_H
#define NOTE1_H
#include <QGraphicsRectItem>
#include <QObject>

class Note1: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
     Note1();

public slots:
     void move();
};

#endif // NOTE1_H
