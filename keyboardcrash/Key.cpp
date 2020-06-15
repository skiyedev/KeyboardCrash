#include <QKeyEvent>
#include <QGraphicsScene>
#include <stdlib.h>
#include <QGraphicsItem>
#include <QDebug>
#include "Note1.h"
#include "Note2.h"
#include "Note3.h"
#include "Note4.h"
#include "Score.h"
#include "Key.h"

extern Score * score;
extern Note1 * note1;
extern Note2 * note2;
extern Note3 * note3;
extern Note4 * note4;
extern Key * key;

void Key::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_Q) {
        if (note1->pos().y() > key->pos().y() - 100 && note1->pos().y() < key->pos().y() + 100) {
            score->increase();
        } else {
            score->decrease();
        }
    }
    if (event->key() == Qt::Key_W) {
        if (note2->pos().y() > key->pos().y() - 100 && note1->pos().y() < key->pos().y() + 100) {
            score->increase();
        } else {
            score->decrease();
        }
    }
    if (event->key() == Qt::Key_O) {
        if (note3->pos().y() > key->pos().y() - 100 && note1->pos().y() < key->pos().y() + 100) {
            score->increase();
        } else {
            score->decrease();
        }
    }
    if (event->key() == Qt::Key_P) {
        if (note4->pos().y() > key->pos().y() - 100 && note1->pos().y() < key->pos().y() + 100) {
            score->increase();
        } else {
            score->decrease();
        }
    }
}

