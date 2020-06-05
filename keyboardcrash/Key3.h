#ifndef KEY3_H
#define KEY3_H

#include <QGraphicsRectItem>
#include <QObject>

class Key3: public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    void keyPressEvent(QKeyEvent * event);
};

#endif // KEY3_H
