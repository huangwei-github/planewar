#ifndef HEROPLANE_H
#define HEROPLANE_H

#include "bullet.h"
#include "config.h"

#include <QPixmap>
#include <QRect>


class HeroPlane
{
public:
    HeroPlane();
    void shoot();
    void setPosition(int x, int y);
public:
    QPixmap m_plane;

    int m_X;
    int m_Y;

    QRect m_Rect;

    Bullet m_bullets[BULLET_NUM];
    int m_recorder;
};

#endif // HEROPLANE_H
