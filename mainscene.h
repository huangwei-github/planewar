#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <QWidget>
#include <QTimer>
#include <QPaintEvent>

#include "heroplane.h"
#include "map.h"
#include "bullet.h"
#include "enemyplane.h"
#include "bomb.h"
class MainScene : public QWidget
{
    Q_OBJECT

public:
    MainScene(QWidget *parent = 0);
    ~MainScene();

    //initScene
    void initScene();

    //start game
    void playGame();

    void updatePosition();

    void paintEvent(QPaintEvent *);

    void mouseMoveEvent(QMouseEvent *);

    void enemyToScene();

    void collisionDetection();

    Map m_map;

    HeroPlane m_hero;

    QTimer m_Timer;

    //Bullet m_bullet;

    EnemyPlane m_enemys[ENEMY_NUM];
    int m_recorder;

    Bomb m_bombs[BOMB_NUM];
};

#endif // MAINSCENE_H
