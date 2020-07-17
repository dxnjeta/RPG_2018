/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** draw_state
*/

#include "my.h"

void	draw_intro(sfRenderWindow *window, game_t *g)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, g->i->intros, NULL);
    sfRenderWindow_drawSprite(window, g->i->d, NULL);
    sfRenderWindow_drawSprite(window, g->i->text, NULL);
    sfRenderWindow_drawSprite(window, g->i->button, NULL);
    sfRenderWindow_drawText(window, g->t->text5, NULL);
    sfRenderWindow_drawSprite(window, g->m->curs, NULL);
    g->i->pos_intro--;
    sfSprite_setPosition(g->i->text, \
    set_position(207, g->i->pos_intro));
}

void	draw_menu(sfRenderWindow *window, game_t *g)
{
    sfRenderWindow_clear(window, sfBlack);
    g->v->rectangle.left = 0;
    g->v->rectangle.top = 0;
    sfView_reset(g->v->view, g->v->rectangle);
    sfRenderWindow_setView(window, g->v->view);
    sfRenderWindow_drawSprite(window, g->m->sbg, NULL);
    sfRenderWindow_drawSprite(window, g->m->bp, NULL);
    sfRenderWindow_drawSprite(window, g->m->bq, NULL);
    sfRenderWindow_drawSprite(window, g->m->bh, NULL);
    sfRenderWindow_drawSprite(window, g->m->d, NULL);
    sfRenderWindow_drawSprite(window, g->m->s, NULL);
    sfRenderWindow_drawText(window, g->t->text, NULL);
    sfRenderWindow_drawText(window, g->t->text2, NULL);
    sfRenderWindow_drawText(window, g->t->text3, NULL);
    sfRenderWindow_drawText(window, g->t->text4, NULL);
    sfRenderWindow_drawSprite(window, g->m->curs, NULL);
}

static	void	draw_game_2(sfRenderWindow *window, game_t *g, \
    char **map)
{
    sfRenderWindow_drawSprite(window, g->n->tree, NULL);
    sfRenderWindow_drawSprite(window, g->n->hwall, NULL);
    sfRenderWindow_drawSprite(window, g->n->mush, NULL);
    sfRenderWindow_drawSprite(window, g->a->punch1, NULL);
    sfRenderWindow_drawSprite(window, g->a->punch2, NULL);
    sfRenderWindow_drawSprite(window, g->a->punch3, NULL);
    sfRenderWindow_drawSprite(window, g->el->d->tree2, NULL);
    sfRenderWindow_drawSprite(window, g->el->d->tree3, NULL);
    sfRenderWindow_drawSprite(window, g->p->player, NULL);
    sfRenderWindow_drawText(window, g->sc, NULL);
    sfRenderWindow_drawText(window, g->t->text8, NULL);
    sfRenderWindow_drawText(window, g->time_tx, NULL);
    sfRenderWindow_drawText(window, g->t->time, NULL);
    sfRenderWindow_drawSprite(window, g->lifes, NULL);
    sfRenderWindow_drawSprite(window, g->ls, NULL);
    sfRenderWindow_drawSprite(window, g->ds, NULL);
    sfRenderWindow_drawSprite(window, g->diamonds, NULL);
    npc_animation(g->n);
    g->time++;
}

void	draw_game(sfRenderWindow *window, game_t *g, char **map)
{
    sfRenderWindow_clear(window, sfGreen);
    sfRenderWindow_drawSprite(window, g->p->b, NULL);
    read_map(map, window, g);
    sfRenderWindow_drawSprite(window, g->el->apple, NULL);
    sfRenderWindow_drawSprite(window, g->el->house, NULL);
    sfRenderWindow_drawSprite(window, g->el->d->farm, NULL);
    sfRenderWindow_drawSprite(window, g->el->d->hw, NULL);
    sfRenderWindow_drawSprite(window, g->a->punch, NULL);
    sfRenderWindow_drawSprite(window, g->el->d->tree1, NULL);
    coin_animation(g->el);
    draw_game_2(window, g, map);
    if (g->time % 100 == 0)
        g->time_left--;
    g->tm = get_str(g->time_left);
    sfText_setString(g->time_tx, g->tm);
    sfRenderWindow_drawSprite(window, g->m->curs, NULL);
}

void	draw_status(sfRenderWindow *window, game_t *g)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, g->ps->ps, NULL);
    sfRenderWindow_drawText(window, g->t->text6, NULL);
    sfRenderWindow_drawText(window, g->t->text7, NULL);
    sfRenderWindow_drawSprite(window, g->ps->names, NULL);
    sfRenderWindow_drawSprite(window, g->ps->players, NULL);
    sfRenderWindow_drawRectangleShape(window, g->ps->r, NULL);
    sfRenderWindow_drawText(window, g->t->p_status, NULL);
    sfRenderWindow_drawSprite(window, g->m->curs, NULL);
}
