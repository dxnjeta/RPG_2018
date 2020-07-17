/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** elements
*/

#include "my.h"

static	void	some_elements(elements_t *el)
{
    el->stonet = sfTexture_createFromFile("assets/stone.png", NULL);
    el->stone = sfSprite_create();
    sfSprite_setTexture(el->stone, el->stonet, sfTrue);
    el->stone1t = sfTexture_createFromFile("assets/stone1.png", NULL);
    el->stone1 = sfSprite_create();
    sfSprite_setTexture(el->stone1, el->stone1t, sfTrue);
    el->stone2t = sfTexture_createFromFile("assets/stone2.png", NULL);
    el->stone2 = sfSprite_create();
    sfSprite_setTexture(el->stone2, el->stone2t, sfTrue);
    el->stone3t = sfTexture_createFromFile("assets/stone3.png", NULL);
    el->stone3 = sfSprite_create();
    sfSprite_setTexture(el->stone3, el->stone3t, sfTrue);
    el->stone4t = sfTexture_createFromFile("assets/stone4.png", NULL);
    el->stone4 = sfSprite_create();
    sfSprite_setTexture(el->stone4, el->stone4t, sfTrue);
}

static	void	walk(elements_t *el)
{
    el->walkt = sfTexture_createFromFile("assets/walk.png", NULL);
    el->walk = sfSprite_create();
    sfSprite_setTexture(el->walk, el->walkt, sfTrue);
    el->walk1t = sfTexture_createFromFile("assets/walk1.png", NULL);
    el->walk1 = sfSprite_create();
    sfSprite_setTexture(el->walk1, el->walk1t, sfTrue);
    el->walk2t = sfTexture_createFromFile("assets/walk2.png", NULL);
    el->walk2 = sfSprite_create();
    sfSprite_setTexture(el->walk2, el->walk2t, sfTrue);
    el->walk3t = sfTexture_createFromFile("assets/walk3.png", NULL);
    el->walk3 = sfSprite_create();
    sfSprite_setTexture(el->walk3, el->walk3t, sfTrue);
    el->walk4t = sfTexture_createFromFile("assets/walk4.png", NULL);
    el->walk4 = sfSprite_create();
    sfSprite_setTexture(el->walk4, el->walk4t, sfTrue);
}

static	void	some_decor(elements_t *el)
{
    el->watert = sfTexture_createFromFile("assets/water.png", NULL);
    el->water = sfSprite_create();
    sfSprite_setTexture(el->water, el->watert, sfTrue);
    el->houset = sfTexture_createFromFile("assets/house.png", NULL);
    el->house = sfSprite_create();
    sfSprite_setTexture(el->house, el->houset, sfTrue);
    sfSprite_setPosition(el->house, set_position(480, 0));
    el->bordert = sfTexture_createFromFile("assets/border.png", NULL);
    el->border = sfSprite_create();
    sfSprite_setTexture(el->border, el->bordert, sfTrue);
}

static	void	coins(elements_t *el)
{
    el->rect.left = 0;
    el->rect.top = 0;
    el->rect.height = 39;
    el->rect.width = 40;
    el->tcoin = sfTexture_createFromFile("assets/coin.png", NULL);
    el->coin = sfSprite_create();
    sfSprite_setTexture(el->coin, el->tcoin, sfTrue);
    sfSprite_setTextureRect(el->coin, el->rect);
    el->tdia = sfTexture_createFromFile("assets/dia.png", NULL);
    el->dia = sfSprite_create();
    sfSprite_setTexture(el->dia, el->tdia, sfTrue);
}

elements_t	*elements(void)
{
    elements_t	*el = malloc(sizeof(elements_t));

    el->d = decor();
    some_elements(el);
    walk(el);
    some_decor(el);
    coins(el);
    el->clock = sfClock_create();
    el->grasst = sfTexture_createFromFile("assets/grass.png", NULL);
    el->grass = sfSprite_create();
    sfSprite_setTexture(el->grass, el->grasst, sfTrue);
    el->applet = sfTexture_createFromFile("assets/apple.png", NULL);
    el->apple = sfSprite_create();
    sfSprite_setTexture(el->apple, el->applet, sfTrue);
    sfSprite_setPosition(el->apple, set_position(60, 0));
    return (el);
}
