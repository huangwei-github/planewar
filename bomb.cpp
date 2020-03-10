#include "bomb.h"
#include "config.h"

#include <QString>

Bomb::Bomb()
{
    for (int i = 1 ; i <= BOMB_MAX; i++) {
        QString str = QString(BOMB_PATH).arg(i);
        m_pixArr.push_back((QPixmap(str)));
    }
    m_X = 0;
    m_Y = 0;
    m_Free = true;
    m_index = 0;
    m_Recorder = 0;
}

void Bomb::updateInfo()
{
    if(m_Free) return;
    m_Recorder++;
    if(m_Recorder < BOMB_INTERVAL) return;
    m_Recorder = 0;
    m_index++;
    if(m_index > BOMB_MAX - 1) {
        m_index = 0;
        m_Free = true;
    }
}
