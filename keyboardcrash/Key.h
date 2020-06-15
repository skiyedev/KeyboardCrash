#ifndef KEY1_H
#define KEY1_H

#include <QGraphicsRectItem>
#include <QObject>

class Key: public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    void keyPressEvent(QKeyEvent * event);
};
#endif // KEY1_H

