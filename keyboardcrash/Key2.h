#ifndef KEY2_H
#define KEY2_H

#include <QGraphicsRectItem>
#include <QObject>

class Key2: public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    void keyPressEvent(QKeyEvent * event);
};

#endif // KEY2_H
