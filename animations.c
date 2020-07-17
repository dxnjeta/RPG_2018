/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** animation
*/

#include "my.h"

void	coin_animation(elements_t *m)
{
    m->time = sfClock_getElapsedTime(m->clock);
    m->seconds = m->time.microseconds / 1000000.0;
    if (m->seconds > 0.1) {
        if (m->rect.left == 200) {
            m->rect.left = 0;
        } else
            m->rect.left = m->rect.left + 40;
        sfSprite_setTextureRect(m->coin, m->rect);
        sfClock_restart(m->clock);
    }
}

void	npc_animation(npc_t *m)
{
    m->time = sfClock_getElapsedTime(m->clock);
    m->seconds = m->time.microseconds / 1000000.0;
    if (m->seconds > 0.5) {
        if (m->rect.left == 360) {
            m->rect.left = 0;
        } else
            m->rect.left = m->rect.left + 180;
        sfSprite_setTextureRect(m->hwall, m->rect);
        sfSprite_setTextureRect(m->tree, m->rect);
        sfSprite_setTextureRect(m->mush, m->rect);
        sfClock_restart(m->clock);
    }
}

void	how_animation(how_to_play_t *m)
{
    m->time = sfClock_getElapsedTime(m->clock);
    m->seconds = m->time.microseconds / 1000000.0;
    if (m->seconds > 0.5) {
        if (m->rect.left == 994) {
            m->rect.left = 0;
        } else
            m->rect.left = m->rect.left + 142;
        sfSprite_setTextureRect(m->arr, m->rect);
        sfClock_restart(m->clock);
    }
}

void	how_animation_2(how_to_play_t *m)
{
    m->time1 = sfClock_getElapsedTime(m->clock1);
    m->seconds1 = m->time1.microseconds / 1000000.0;
    if (m->seconds1 > 0.5) {
        if (m->rect1.left == 143) {
            m->rect1.left = 0;
        } else
            m->rect1.left = m->rect1.left + 143;
        sfSprite_setTextureRect(m->esc, m->rect1);
        sfSprite_setTextureRect(m->space, m->rect1);
        sfSprite_setTextureRect(m->i, m->rect1);
        sfClock_restart(m->clock1);
    }
}
