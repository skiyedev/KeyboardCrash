#include <QApplication>
#include <QGraphicsScene>
#include "Key.h"
#include "Score.h"
#include "SpawnArrow.h"
#include <QGraphicsView>
#include <QTimer>


Score * score;

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    QGraphicsScene * scene = new QGraphicsScene();
    QGraphicsView * view = new QGraphicsView(scene);

	SpawnArrow * spawn = new SpawnArrow();

    Score * score;

    QPixmap textures[] = {QPixmap(":/Textures/Left.png"), QPixmap(":/Textures/Down.png"), QPixmap(":/Textures/Up.png"), QPixmap(":/Textures/Right.png")};

    for (int i = 0; i < 4; i++) {
		Key * key = new Key();
        key->setFlag(QGraphicsPixmapItem::ItemIsFocusable);
        key->setPixmap(textures[i]);
    	key->setPos(100 * i, 750);
    	scene->addItem(key);
    	key->setFocus();
	}

    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->show();
    view->setFixedSize(400, 900);
    view->setBackgroundBrush(Qt::black);
    scene->setSceneRect(0, 0, 1600, 900);

    score = new Score();
    scene->addItem(score);

    // spawn notes

    QTimer * timer = new QTimer();
    QObject::connect(timer, SIGNAL(timeout()), spawn, SLOT(spawnArrow()));
    timer->start(300);

    return a.exec();
}
