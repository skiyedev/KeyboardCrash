#ifndef KEY1_H
#define KEY1_H

#include <QGraphicsRectItem>
#include <QObject>

class Key1: public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    void keyPressEvent(QKeyEvent * event);
public slots:
    void spawn();
};

#endif // KEY1_H
