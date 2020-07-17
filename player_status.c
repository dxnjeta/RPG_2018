/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** player_status
*/

#include "my.h"

static	void	text_rect(player_status_t *ps)
{
    ps->r = sfRectangleShape_create();
    sfRectangleShape_setSize(ps->r, set_position(150, 150));
    sfRectangleShape_setFillColor(ps->r, sfTransparent);
    sfRectangleShape_setOutlineColor(ps->r, sfWhite);
    sfRectangleShape_setOutlineThickness(ps->r, 6.0);
    sfRectangleShape_setPosition(ps->r, set_position(75, 250));
    ps->rect.left = 0;
    ps->rect.top = 0;
    ps->rect.width = 200;
    ps->rect.height = 44;
}

player_status_t	*player_status(void)
{
    player_status_t	*ps = malloc(sizeof(player_status_t));

    text_rect(ps);
    ps->check = 1;
    ps->pst = sfTexture_createFromFile("assets/ps.png", NULL);
    ps->ps = sfSprite_create();
    sfSprite_setTexture(ps->ps, ps->pst, sfTrue);
    ps->playerst = sfTexture_createFromFile("assets/players4.png", NULL);
    ps->players = sfSprite_create();
    sfSprite_setTexture(ps->players, ps->playerst, sfTrue);
    sfSprite_setPosition(ps->players, set_position(0, 220));
    ps->namet = sfTexture_createFromFile("assets/names.png", NULL);
    ps->names = sfSprite_create();
    sfSprite_setTexture(ps->names, ps->namet, sfTrue);
    sfSprite_setPosition(ps->names, set_position(715, 830));
    sfSprite_setTextureRect(ps->names, ps->rect);
    return (ps);
}
