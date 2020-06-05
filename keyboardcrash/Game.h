#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include "Score.h"

class Game: public QGraphicsView
{
public:
    Game(QWidget * parent=0);
    QGraphicsScene * scene;
    Score * score;
};

#endif // GAME_H
