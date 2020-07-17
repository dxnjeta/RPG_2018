/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** player
*/

#include "my.h"

static	void	player_rect(player_t *p)
{
    p->move_speed = 80;
    p->rect.left = 0;
    p->rect.top = 0;
    p->rect.width = 64;
    p->rect.height = 64;
    p->right.x = p->move_speed;
    p->right.y = 0;
    p->left.x = -p->move_speed;
    p->left.y = 0;
    p->up.x = 0;
    p->up.y = -p->move_speed;
    p->down.x = 0;
    p->down.y = p->move_speed;
}

void	player_animation(player_t *p)
{
    p->time = sfClock_getElapsedTime(p->clock);
    p->seconds = p->time.microseconds / 500000.0;
    if (p->seconds > 0.15) {
        if (p->rect.left == 128) {
            p->rect.left = 0;
        } else
            p->rect.left = p->rect.left + 64;
        sfSprite_setTextureRect(p->m, p->rect);
        sfClock_restart(p->clock);
    }
}

static	void	other_players(player_t *p)
{
    p->emanuelt = sfTexture_createFromFile("assets/boy1.png", NULL);
    p->emanuel = sfSprite_create();
    sfSprite_setTexture(p->emanuel, p->emanuelt, sfTrue);
    sfSprite_setTextureRect(p->emanuel, p->rect);
    sfSprite_setPosition(p->emanuel, set_position(560, 240));
    p->endrit = sfTexture_createFromFile("assets/boy2.png", NULL);
    p->endri = sfSprite_create();
    sfSprite_setTexture(p->endri, p->endrit, sfTrue);
    sfSprite_setTextureRect(p->endri, p->rect);
    sfSprite_setPosition(p->endri, set_position(560, 240));
    p->donjetat = sfTexture_createFromFile("assets/girl1.png", NULL);
    p->donjeta = sfSprite_create();
    sfSprite_setTexture(p->donjeta, p->donjetat, sfTrue);
    sfSprite_setTextureRect(p->donjeta, p->rect);
    sfSprite_setPosition(p->donjeta, set_position(560, 240));
}

player_t	*set_player(void)
{
    player_t	*p = malloc(sizeof(player_t));

    player_rect(p);
    other_players(p);
    p->i = 0;
    p->clock = sfClock_create();
    p->man = sfTexture_createFromFile("assets/boy3.png", NULL);
    p->m = sfSprite_create();
    sfSprite_setTexture(p->m, p->man, sfTrue);
    sfSprite_setTextureRect(p->m, p->rect);
    sfSprite_setPosition(p->m, set_position(560, 240));
    p->bg = sfTexture_createFromFile("assets/green.png", NULL);
    p->b = sfSprite_create();
    sfSprite_setTexture(p->b, p->bg, sfTrue);
    sfSprite_setScale(p->b, set_scale(5, 5));
    p->player = sfSprite_copy(p->m);
    sfSprite_setScale(p->player, set_scale(1, 1));
    return (p);
}
