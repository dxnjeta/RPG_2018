/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** enemy
*/

#include "my.h"

void	punch_animation(enemy_t *m)
{
    m->time = sfClock_getElapsedTime(m->clock);
    m->seconds = m->time.microseconds / 1000000.0;
    if (m->seconds > 0.8) {
        if (m->rect.top == 180) {
            m->rect.top = 0;
        } else
            m->rect.top = m->rect.top + 60;
        sfSprite_setTextureRect(m->punch, m->rect);
        sfSprite_setTextureRect(m->punch1, m->rect);
        sfSprite_setTextureRect(m->punch2, m->rect);
        sfSprite_setTextureRect(m->punch3, m->rect);
        sfClock_restart(m->clock);
    }
}

static	void	enemy_rect(enemy_t *a)
{
    a->clock = sfClock_create();
    a->rect.left = 0;
    a->rect.top = 0;
    a->rect.width = 257;
    a->rect.height = 60;
}

enemy_t	*enemy(void)
{
    enemy_t	*a = malloc(sizeof(enemy_t));

    enemy_rect(a);
    a->puncht = sfTexture_createFromFile("assets/boks.png", NULL);
    a->punch = sfSprite_create();
    sfSprite_setTexture(a->punch, a->puncht, sfTrue);
    sfSprite_setTextureRect(a->punch, a->rect);
    sfSprite_setPosition(a->punch, set_position(870, 650));
    a->punch1 = sfSprite_copy(a->punch);
    a->punch2 = sfSprite_copy(a->punch);
    a->punch3 = sfSprite_copy(a->punch);
    sfSprite_setPosition(a->punch1, set_position(1350, 890));
    sfSprite_setPosition(a->punch2, set_position(630, 1370));
    sfSprite_setPosition(a->punch3, set_position(70, 1050));
    return (a);
}
