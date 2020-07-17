/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** decor
*/

#include "my.h"

static	void	nature(decor_t *d)
{
    d->tree1t = sfTexture_createFromFile("assets/tree1.png", NULL);
    d->tree1 = sfSprite_create();
    sfSprite_setTexture(d->tree1, d->tree1t, sfTrue);
    sfSprite_setPosition(d->tree1, set_position(790, 535));
    d->tree2 = sfSprite_copy(d->tree1);
    d->tree3 = sfSprite_copy(d->tree1);
    sfSprite_setPosition(d->tree2, set_position(1270, 775));
    sfSprite_setPosition(d->tree3, set_position(790, 535));
    d->locked = sfTexture_createFromFile("assets/locktile.png", NULL);
    d->lock = sfSprite_create();
    sfSprite_setTexture(d->lock, d->locked, sfTrue);
}

static	void	water_decor(decor_t *d)
{
    d->water5t = sfTexture_createFromFile("assets/water5.png", NULL);
    d->water5 = sfSprite_create();
    sfSprite_setTexture(d->water5, d->water5t, sfTrue);
    d->water6t = sfTexture_createFromFile("assets/water6.png", NULL);
    d->water6 = sfSprite_create();
    sfSprite_setTexture(d->water6, d->water6t, sfTrue);
    d->water7t = sfTexture_createFromFile("assets/water7.png", NULL);
    d->water7 = sfSprite_create();
    sfSprite_setTexture(d->water7, d->water7t, sfTrue);
    d->water8t = sfTexture_createFromFile("assets/water8.png", NULL);
    d->water8 = sfSprite_create();
    sfSprite_setTexture(d->water8, d->water8t, sfTrue);
}

static	void	farms(decor_t *d)
{
    d->farmt = sfTexture_createFromFile("assets/bari.png", NULL);
    d->farm = sfSprite_create();
    sfSprite_setTexture(d->farm, d->farmt, sfTrue);
    sfSprite_setPosition(d->farm, set_position(490, 915));
    d->hwt = sfTexture_createFromFile("assets/hoinwater.png", NULL);
    d->hw = sfSprite_create();
    sfSprite_setTexture(d->hw, d->hwt, sfTrue);
    sfSprite_setPosition(d->hw, set_position(2000, 0));
}

decor_t	*decor(void)
{
    decor_t	*d = malloc(sizeof(decor_t));

    water_decor(d);
    farms(d);
    nature(d);
    d->water1t = sfTexture_createFromFile("assets/water1.png", NULL);
    d->water1 = sfSprite_create();
    sfSprite_setTexture(d->water1, d->water1t, sfTrue);
    d->water2t = sfTexture_createFromFile("assets/water2.png", NULL);
    d->water2 = sfSprite_create();
    sfSprite_setTexture(d->water2, d->water2t, sfTrue);
    d->water3t = sfTexture_createFromFile("assets/water3.png", NULL);
    d->water3 = sfSprite_create();
    sfSprite_setTexture(d->water3, d->water3t, sfTrue);
    d->water4t = sfTexture_createFromFile("assets/water4.png", NULL);
    d->water4 = sfSprite_create();
    sfSprite_setTexture(d->water4, d->water4t, sfTrue);
    return (d);
}
