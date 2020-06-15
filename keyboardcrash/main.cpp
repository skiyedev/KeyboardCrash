#include <QApplication>
#include <QGraphicsScene>
#include "Key1.h"
#include "Key2.h"
#include "Key3.h"
#include "Key4.h"
#include "Score.h"
#include "SpawnArrow.h"
#include <QGraphicsView>
#include <QTimer>

Score * score;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene * scene = new QGraphicsScene();
    QGraphicsView * view = new QGraphicsView(scene);

    Key1 * key1 = new Key1();
    Key2 * key2 = new Key2();
    Key3 * key3 = new Key3();
    Key4 * key4 = new Key4();
    SpawnArrow * spawn = new SpawnArrow();

    Score * score;

    key1->setFlag(QGraphicsPixmapItem::ItemIsFocusable);
    key1->setPixmap(QPixmap(":/Textures/Left.png"));
    key1->setPos(0,750);
    scene->addItem(key1);
    key1->setFocus();

    key2->setFlag(QGraphicsPixmapItem::ItemIsFocusable);
    key2->setPixmap(QPixmap(":/Textures/Down.png"));
    key2->setPos(100,750);
    scene->addItem(key2);
    key2->setFocus();

    key3->setFlag(QGraphicsPixmapItem::ItemIsFocusable);
    key3->setPixmap(QPixmap(":/Textures/Up.png"));
    key3->setPos(200,750);
    scene->addItem(key3);
    key3->setFocus();

    key4->setFlag(QGraphicsPixmapItem::ItemIsFocusable);
    key4->setPixmap(QPixmap(":/Textures/Right.png"));
    key4->setPos(300,750);
    scene->addItem(key4);
    key4->setFocus();

    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->show();
    view->setFixedSize(400,900);
    view->setBackgroundBrush(Qt::black);
    scene->setSceneRect(0,0,1600,900);

    score = new Score();
    scene->addItem(score);

    // spawn notes

    QTimer * timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),spawn,SLOT(spawnArrow()));
    timer->start(300);

    return a.exec();
}
