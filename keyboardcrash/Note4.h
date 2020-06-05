#ifndef NOTE4_H
#define NOTE4_H
#include <QGraphicsRectItem>
#include <QObject>

class Note4: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
     Note4();
public slots:
     void move();
};

#endif // NOTE4_H
