/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** settings
*/

#include "my.h"

static	void	rect(settings_t *s)
{
    s->rect.left = 0;
    s->rect.width = 744;
    s->rect.top = 0;
    s->rect.height = 97;
    s->rect1.left = 0;
    s->rect1.width = 186;
    s->rect1.top = 0;
    s->rect1.height = 97;
    sfSprite_setTextureRect(s->sli2, s->rect);
    sfSprite_setTextureRect(s->ssli2, s->rect1);
}

static	void	settings_2(settings_t *s)
{
    s->sslit = sfSprite_copy(s->slit);
    s->ssli2 = sfSprite_copy(s->sli2);
    s->set = sfTexture_createFromFile("assets/1.png", NULL);
    s->se = sfSprite_create();
    sfSprite_setTexture(s->se, s->set, sfTrue);
    sfSprite_setScale(s->se, set_scale(0.55, 0.55));
    sfSprite_setPosition(s->se, set_position(150, 50));
    sfSprite_setPosition(s->s1, set_position(350, 150));
    sfSprite_setPosition(s->m1, set_position(350, 300));
    sfSprite_setPosition(s->slit, set_position(500, 175));
    sfSprite_setPosition(s->sli2, set_position(500, 175));
    sfSprite_setPosition(s->sslit, set_position(500, 325));
    sfSprite_setPosition(s->ssli2, set_position(500, 325));
    rect(s);
}

settings_t	*settings(void)
{
    settings_t	*s = malloc(sizeof(settings_t));

    s->s1t = sfTexture_createFromFile("assets/s1.png", NULL);
    s->s1 = sfSprite_create();
    sfSprite_setTexture(s->s1, s->s1t, sfTrue);
    s->m1t = sfTexture_createFromFile("assets/m1.png", NULL);
    s->m1 = sfSprite_create();
    sfSprite_setTexture(s->m1, s->m1t, sfTrue);
    s->slit1 = sfTexture_createFromFile("assets/sl_1.png", NULL);
    s->slit = sfSprite_create();
    sfSprite_setTexture(s->slit, s->slit1, sfTrue);
    s->slit2 = sfTexture_createFromFile("assets/sl_2.png", NULL);
    s->sli2 = sfSprite_create();
    sfSprite_setTexture(s->sli2, s->slit2, sfTrue);
    sfSprite_setScale(s->sli2, set_scale(0.4, 0.4));
    sfSprite_setScale(s->slit, set_scale(0.4, 0.4));
    sfSprite_setScale(s->m1, set_scale(0.4, 0.4));
    sfSprite_setScale(s->s1, set_scale(0.4, 0.4));
    settings_2(s);
    return (s);
}
