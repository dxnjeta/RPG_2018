/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** events
*/

#include "my.h"

static	void	some_move(game_t *g)
{
    sfSprite_setPosition(g->ls, \
    set_position(g->v->position.x + 1020, g->v->position.y + 15));
    sfSprite_setPosition(g->lifes, \
    set_position(g->v->position.x + 1020, g->v->position.y + 15));
    sfText_setPosition(g->sc, \
    set_position(g->v->position.x + 150, g->v->position.y + 15));
    sfText_setPosition(g->t->text8, \
    set_position(g->v->position.x + 15, g->v->position.y + 15));
    sfText_setPosition(g->time_tx, \
    set_position(g->v->position.x + 1120, g->v->position.y + 80));
    sfText_setPosition(g->t->time, \
    set_position(g->v->position.x + 950, g->v->position.y + 80));
    if (g->state == 7 || g->state == 8)
        g->sleep++;
}

static	void	move_view(sfRenderWindow *window, game_t *g, \
    char **map)
{
    g->v->position.x = sfSprite_getPosition(g->p->player).x + 32 - \
    (g->screen_dx / 2);
    g->v->position.y = sfSprite_getPosition(g->p->player).y + 32 - \
    (g->screen_dy / 2);
    if (g->v->position.x < 0)
        g->v->position.x = 0;
    if (g->v->position.y < 0)
        g->v->position.y = 0;
    g->v->rectangle.left = g->v->position.x;
    g->v->rectangle.top = g->v->position.y;
    sfView_reset(g->v->view, g->v->rectangle);
    sfSprite_setPosition(g->ds, set_position(g->v->position.x + 15, \
    g->v->position.y + 70));
    sfSprite_setPosition(g->diamonds, \
    set_position(g->v->position.x + 15, g->v->position.y + 70));
    some_move(g);
}

static	void	loose_win(game_t *g, sfRenderWindow *window, \
    sfEvent event)
{
    change_state_4(g, event, window);
    if (g->sleep >= 500)
        sfRenderWindow_close(window);
}

void	event_loop(sfRenderWindow *window, game_t *g, char **map)
{
    sfEvent	event;
    sfVector2f	pos;
    sfMouseMoveEvent	move_mouse;

    play_sound(g);
    sfRenderWindow_setMouseCursorVisible(window, sfFalse);
    while (sfRenderWindow_pollEvent(window, &event)) {
        move_mouse = event.mouseMove;
        pos.x = move_mouse.x - 10;
        pos.y = move_mouse.y - 10;
        get_cursor(g, pos, event);
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
        if (g->state == 1)
            player_move(event, g, map);
        set_cursor(g, event);
        change_state(g, event, window);
        loose_win(g, window, event);
    }
    move_view(window, g, map);
}
