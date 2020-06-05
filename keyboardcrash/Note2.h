#ifndef NOTE2_H
#define NOTE2_H
#include <QGraphicsRectItem>
#include <QObject>

class Note2: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
     Note2();
public slots:
     void move();
};

#endif // NOTE2_H
