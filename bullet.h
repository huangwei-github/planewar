#ifndef BULLET_H
#define BULLET_H

#include <QPixmap>
#include <QRect>


class Bullet
{
public:
    QPixmap m_Bullet;
    int m_X;
    int m_Y;
    int m_Speed;
    bool m_Free;
    QRect m_Rect;

    Bullet();
    void updatePosition();

};

#endif // BULLET_H
