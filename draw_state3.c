/*
** EPITECH PROJECT, 2019
** dfg
** File description:
** sdfg
*/

#include "my.h"

void	draw_nothing(sfRenderWindow *window, game_t *g)
{
    g->v->rectangle.left = 0;
    g->v->rectangle.top = 0;
    sfView_reset(g->v->view, g->v->rectangle);
    sfRenderWindow_setView(window, g->v->view);
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawText(window, g->t->bre2, NULL);
}

void	draw_win(sfRenderWindow *window, game_t *g)
{
    g->v->rectangle.left = 0;
    g->v->rectangle.top = 0;
    sfView_reset(g->v->view, g->v->rectangle);
    sfRenderWindow_setView(window, g->v->view);
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, g->n->won, NULL);
}

void	draw_loose(sfRenderWindow *window, game_t *g)
{
    g->v->rectangle.left = 0;
    g->v->rectangle.top = 0;
    sfView_reset(g->v->view, g->v->rectangle);
    sfRenderWindow_setView(window, g->v->view);
    sfRenderWindow_clear(window, sfWhite);
    sfRenderWindow_drawSprite(window, g->n->cry, NULL);
}

void	draw_nothing_2(sfRenderWindow *window, game_t *g)
{
    g->v->rectangle.left = 0;
    g->v->rectangle.top = 0;
    sfView_reset(g->v->view, g->v->rectangle);
    sfRenderWindow_setView(window, g->v->view);
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawText(window, g->t->bre1, NULL);
}
