/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** draw_state_2
*/

#include "my.h"

void	draw_inventory(sfRenderWindow *window, game_t *g)
{
    g->v->rectangle.left = 0;
    g->v->rectangle.top = 0;
    sfView_reset(g->v->view, g->v->rectangle);
    sfRenderWindow_setView(window, g->v->view);
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, g->m->d, NULL);
    sfRenderWindow_drawText(window, g->t->how5, NULL);
    sfRenderWindow_drawSprite(window, g->n->ls, NULL);
    sfRenderWindow_drawSprite(window, g->n->df, NULL);
    sfRenderWindow_drawText(window, g->t->in1, NULL);
    sfRenderWindow_drawText(window, g->t->in2, NULL);
}

void	draw_pause(sfRenderWindow *window, game_t *g)
{
    g->v->rectangle.left = 0;
    g->v->rectangle.top = 0;
    sfView_reset(g->v->view, g->v->rectangle);
    sfRenderWindow_setView(window, g->v->view);
    sfRenderWindow_clear(window, sfBlue);
    sfRenderWindow_drawSprite(window, g->h->bg, NULL);
    sfRenderWindow_drawSprite(window, g->m->bp, NULL);
    sfRenderWindow_drawSprite(window, g->m->bq, NULL);
    sfRenderWindow_drawSprite(window, g->m->s, NULL);
    sfRenderWindow_drawSprite(window, g->n->pause, NULL);
    sfRenderWindow_drawText(window, g->t->pause1, NULL);
    sfRenderWindow_drawText(window, g->t->pause2, NULL);
    sfRenderWindow_drawText(window, g->t->pause3, NULL);
    sfRenderWindow_drawSprite(window, g->m->curs, NULL);
}

void	draw_settings(sfRenderWindow *window, game_t *g)
{
    g->v->rectangle.left = 0;
    g->v->rectangle.top = 0;
    sfView_reset(g->v->view, g->v->rectangle);
    sfRenderWindow_setView(window, g->v->view);
    sfRenderWindow_clear(window, sfMagenta);
    sfRenderWindow_drawSprite(window, g->set->se, NULL);
    sfRenderWindow_drawSprite(window, g->set->slit, NULL);
    sfRenderWindow_drawSprite(window, g->set->sli2, NULL);
    sfRenderWindow_drawSprite(window, g->set->sslit, NULL);
    sfRenderWindow_drawSprite(window, g->set->ssli2, NULL);
    sfRenderWindow_drawSprite(window, g->set->s1, NULL);
    sfRenderWindow_drawSprite(window, g->set->m1, NULL);
    sfRenderWindow_drawText(window, g->t->plus, NULL);
    sfRenderWindow_drawText(window, g->t->plus2, NULL);
    sfRenderWindow_drawText(window, g->t->set1, NULL);
    sfRenderWindow_drawSprite(window, g->m->curs, NULL);
}

void	draw_howtoplay(sfRenderWindow *window, game_t *g)
{
    g->v->rectangle.left = 0;
    g->v->rectangle.top = 0;
    sfView_reset(g->v->view, g->v->rectangle);
    sfRenderWindow_setView(window, g->v->view);
    sfRenderWindow_clear(window, sfMagenta);
    sfRenderWindow_drawSprite(window, g->h->bg, NULL);
    sfRenderWindow_drawSprite(window, g->h->htp, NULL);
    sfRenderWindow_drawSprite(window, g->h->arr, NULL);
    sfRenderWindow_drawSprite(window, g->h->i, NULL);
    sfRenderWindow_drawSprite(window, g->h->esc, NULL);
    sfRenderWindow_drawSprite(window, g->h->space, NULL);
    sfRenderWindow_drawText(window, g->t->how1, NULL);
    sfRenderWindow_drawText(window, g->t->how2, NULL);
    sfRenderWindow_drawText(window, g->t->how3, NULL);
    sfRenderWindow_drawText(window, g->t->how4, NULL);
    sfRenderWindow_drawText(window, g->t->how5, NULL);
    sfRenderWindow_drawText(window, g->t->how6, NULL);
    sfRenderWindow_drawSprite(window, g->m->curs, NULL);
    how_animation(g->h);
    how_animation_2(g->h);
}
