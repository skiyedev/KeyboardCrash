#ifndef KEY4_H
#define KEY4_H

#include <QGraphicsRectItem>
#include <QObject>

class Key4: public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    void keyPressEvent(QKeyEvent * event);
};

#endif // KEY4_H
