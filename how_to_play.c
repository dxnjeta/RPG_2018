/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** how_to_play
*/

#include "my.h"

static	void	how_rect(how_to_play_t *h)
{
    h->rect.left = 0;
    h->rect.top = 0;
    h->rect.width = 142;
    h->rect.height = 98;
    h->rect1.left = 0;
    h->rect1.top = 0;
    h->rect1.width = 142;
    h->rect1.height = 98;
    h->it = sfTexture_createFromFile("assets/I.png", NULL);
    h->i = sfSprite_create();
    sfTexture_setSmooth(h->it, sfTrue);
    sfSprite_setTexture(h->i, h->it, sfTrue);
    sfSprite_setTextureRect(h->i, h->rect1);
    sfSprite_setScale(h->i, set_scale(1.5, 1.5));
    sfSprite_setPosition(h->i, set_position(30, 400));
    h->htpt = sfTexture_createFromFile("assets/htp.png", NULL);
    h->htp = sfSprite_create();
    sfSprite_setTexture(h->htp, h->htpt, sfTrue);
    sfSprite_setPosition(h->htp, set_position(180, 30));
    sfSprite_setColor(h->htp, sfMagenta);
}

static	void	esc_space(how_to_play_t *h)
{
    h->esct = sfTexture_createFromFile("assets/esc.png", NULL);
    h->esc = sfSprite_create();
    sfTexture_setSmooth(h->esct, sfTrue);
    sfSprite_setTexture(h->esc, h->esct, sfTrue);
    sfSprite_setTextureRect(h->esc, h->rect1);
    sfSprite_setScale(h->esc, set_scale(1.5, 1.5));
    sfSprite_setPosition(h->esc, set_position(530, 400));
    h->spacet = sfTexture_createFromFile("assets/space.png", NULL);
    h->space = sfSprite_create();
    sfTexture_setSmooth(h->spacet, sfTrue);
    sfSprite_setTexture(h->space, h->spacet, sfTrue);
    sfSprite_setTextureRect(h->space, h->rect1);
    sfSprite_setScale(h->space, set_scale(1.5, 1.5));
    sfSprite_setPosition(h->space, set_position(30, 500));
    h->bgt = sfTexture_createFromFile("assets/BG.png", NULL);
    h->bg = sfSprite_create();
    sfSprite_setTexture(h->bg, h->bgt, sfTrue);
    sfSprite_setColor(h->bg, sfCyan);
}

how_to_play_t	*how_to_play(void)
{
    how_to_play_t	*h = malloc(sizeof(how_to_play_t));

    how_rect(h);
    esc_space(h);
    h->clock = sfClock_create();
    h->clock1 = sfClock_create();
    h->arrt = sfTexture_createFromFile("assets/arrows.png", NULL);
    h->arr = sfSprite_create();
    sfTexture_setSmooth(h->arrt, sfTrue);
    sfSprite_setTexture(h->arr, h->arrt, sfTrue);
    sfSprite_setTextureRect(h->arr, h->rect);
    sfSprite_setScale(h->arr, set_scale(1.5, 1.5));
    sfSprite_setPosition(h->arr, set_position(30, 200));
    return (h);
}
