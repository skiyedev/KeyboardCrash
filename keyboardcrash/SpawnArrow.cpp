#include "SpawnArrow.h"
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


void SpawnArrow::spawnArrow()
{
    int a = rand()%8;
    if(a<5){
        Note1 * note1 = new Note1();
        note1->setPos(x(),y()-850);
        scene()->addItem(note1);

    }

    a = rand()%8;
    if(a<5){
        Note2 * note2 = new Note2();
        note2->setPos(x()+100,y()-850);
        scene()->addItem(note2);
    }

    a = rand()%8;
    if(a<5){
        Note3 * note3 = new Note3();
        note3->setPos(x()+200,y()-850);
        scene()->addItem(note3);
    }
    a = rand()%8;
    if(a<5){
        Note4 * note4 = new Note4();
        note4->setPos(x()+300,y()-850);
        scene()->addItem(note4);
    }
}
