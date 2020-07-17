/*
** EPITECH PROJECT, 2019
** mu_rpg
** File description:
** cursor
*/

#include "my.h"

void	play_button(sfMouseMoveEvent mousem, game_t *g, \
    sfMouseButtonEvent mouse)
{
    if (mousem.x >= 460 && mousem.x <= 740 && \
    mousem.y >= 360 && mousem.y <= 480)
        g->m->rect.top = 150;
    else if (mouse.x >= 460 && mouse.x <= 740 && \
    mouse.y >= 360 && mouse.y <= 480)
        g->m->rect.top = 300;
    else
        g->m->rect.top = 0;
    sfSprite_setTextureRect(g->m->bq, g->m->rect);
}

void	ins_button(sfMouseMoveEvent mousem, game_t *g, \
    sfMouseButtonEvent mouse)
{
    if (mousem.x >= 460 && mousem.x <= 740 && \
    mousem.y >= 510 && mousem.y <= 630)
        g->m->rect.top = 150;
    else if (mouse.x >= 460 && mouse.x <= 740 && \
    mouse.y >= 510 && mouse.y <= 630)
        g->m->rect.top = 300;
    else
        g->m->rect.top = 0;
    sfSprite_setTextureRect(g->m->bp, g->m->rect);
}

void	quit_button(sfMouseMoveEvent mousem, game_t *g, \
    sfMouseButtonEvent mouse)
{
    if (mousem.x >= 460 && mousem.x <= 740 && \
    mousem.y >= 810 && mousem.y <= 930)
        g->m->rect.top = 150;
    else if (mouse.x >= 460 && mouse.x <= 740 && \
    mouse.y >= 810 && mouse.y <= 930)
        g->m->rect.top = 300;
    else
        g->m->rect.top = 0;
    sfSprite_setTextureRect(g->m->bh, g->m->rect);
}

void	settings_button(sfMouseMoveEvent mousem, game_t *g, \
    sfMouseButtonEvent mouse)
{
    if (mousem.x >= 460 && mousem.x <= 740 && \
    mousem.y >= 670 && mousem.y <= 790)
        g->m->rect.top = 150;
    else if (mouse.x >= 460 && mouse.x <= 740 && \
    mouse.y >= 670 && mouse.y <= 790)
        g->m->rect.top = 300;
    else
        g->m->rect.top = 0;
    sfSprite_setTextureRect(g->m->s, g->m->rect);
}
