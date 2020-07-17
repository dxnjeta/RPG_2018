/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** intro
*/

#include "my.h"

void	skip_button(sfMouseMoveEvent mousem, game_t *g, \
    sfMouseButtonEvent mouse)
{
    if (mousem.x >= 950 && mousem.x <= 1175 && \
    mousem.y >= 5 && mousem.y <= 110)
        g->m->rect.top = 150;
    else if (mouse.x >= 950 && mouse.x <= 1175 && \
    mouse.y >= 5 && mouse.y <= 110)
        g->m->rect.top = 300;
    else
        g->m->rect.top = 0;
    sfSprite_setTextureRect(g->i->button, g->m->rect);
}

static	void	move_intro(intro_t *i)
{
    i->textt = sfTexture_createFromFile("assets/intro_game.png", NULL);
    i->text = sfSprite_create();
    sfSprite_setTexture(i->text, i->textt, sfTrue);
    sfSprite_setPosition(i->text, set_position(207, i->pos_intro));
}

intro_t	*intro(game_t *g)
{
    intro_t *i = malloc(sizeof(intro_t));

    i->pos_intro = 1000;
    i->introt = sfTexture_createFromFile("assets/rintro.png", NULL);
    i->intros = sfSprite_create();
    sfSprite_setTexture(i->intros, i->introt, sfTrue);
    i->dt = sfTexture_createFromFile("assets/rpgchest.png", NULL);
    i->d = sfSprite_create();
    sfSprite_setTexture(i->d, i->dt, sfTrue);
    sfSprite_setPosition(i->d, set_position(430, 600));
    sfSprite_setScale(i->d, set_scale(0.8, 0.8));
    sfTexture_setSmooth(i->dt, sfTrue);
    i->button = sfSprite_copy(g->m->bp);
    sfSprite_setPosition(i->button, set_position(950, 5));
    sfSprite_setScale(i->button, set_scale(0.8, 0.8));
    move_intro(i);
    return (i);
}
