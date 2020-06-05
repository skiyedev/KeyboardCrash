#ifndef NOTE3_H
#define NOTE3_H
#include <QGraphicsRectItem>
#include <QObject>

class Note3: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
     Note3();
public slots:
     void move();
};

#endif // NOTE3_H
