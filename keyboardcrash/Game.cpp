#include "Game.h"
#include <QGraphicsTextItem>

Game::Game(QWidget *parent)
{
    scene = new QGraphicsScene();
    score = new Score();
    scene->addItem(score);
}
