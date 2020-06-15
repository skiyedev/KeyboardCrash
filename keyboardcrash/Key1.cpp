#include "Key1.h"
#include <QKeyEvent>
#include <QGraphicsScene>
#include "Note1.h"
#include "Note2.h"
#include "Note3.h"
#include "Note4.h"
#include "Score.h"
#include <stdlib.h>
#include <QGraphicsItem>
#include <QDebug>

extern Score * score;

void Key1::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Left)
    {
    }
}

