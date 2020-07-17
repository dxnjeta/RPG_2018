/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** cursor
*/

#include "my.h"

static	void	click_buttons(sfMouseButtonEvent mouse, \
    game_t *g, sfRenderWindow *window)
{
    if (mouse.x >= 460 && mouse.x <= 740 && \
    mouse.y >= 360 && mouse.y <= 480)
        g->state = 1;
    if (mouse.x >= 460 && mouse.x <= 740 && \
    mouse.y >= 510 && mouse.y <= 630)
        g->state = 2;
    if (mouse.x >= 460 && mouse.x <= 740 && \
    mouse.y >= 810 && mouse.y <= 930)
        sfRenderWindow_close(window);
}

static	void	click_buttons_2(sfMouseButtonEvent mouse, \
    game_t *g)
{
    if (g->state == -1) {
        if (mouse.x >= 950 && mouse.x <= 1175 && \
    mouse.y >= 5 && mouse.y <= 110)
            g->state = -2;
    }
    if (g->state == 0) {
        if (mouse.x >= 460 && mouse.x <= 740 && \
    mouse.y >= 660 && mouse.y <= 780)
            g->state = 6;
    }
}

static	void	change_player_2(sfMouseButtonEvent mouse, \
    game_t *g)
{
    if (mouse.x >= 75 && mouse.x <= 225 && \
    mouse.y >= 250 && mouse.y <= 400) {
        g->ps->check = 1;
        g->ps->rect.left = 0;
        sfRectangleShape_setPosition(g->ps->r, set_position(75, 250));
        sfSound_play(g->s->emanuel);
    }
    if (mouse.x >= 375 && mouse.x <= 525 && \
    mouse.y >= 250 && mouse.y <= 400) {
        g->ps->check = 2;
        g->ps->rect.left = 200;
        sfRectangleShape_setPosition(g->ps->r, set_position(375, 250));
        sfSound_play(g->s->donjeta);
    }
    sfSprite_setTextureRect(g->ps->names, g->ps->rect);
}

static	void	change_player(sfMouseButtonEvent mouse, \
    game_t *g)
{
    if (mouse.x >= 675 && mouse.x <= 825 && \
    mouse.y >= 250 && mouse.y <= 400) {
        g->ps->check = 3;
        g->ps->rect.left = 400;
        sfRectangleShape_setPosition(g->ps->r, set_position(675, 250));
        sfSound_play(g->s->endri);
    }
    if (mouse.x >= 975 && mouse.x <= 1125 && \
    mouse.y >= 250 && mouse.y <= 400) {
        g->ps->check = 4;
        g->ps->rect.left = 600;
        sfRectangleShape_setPosition(g->ps->r, set_position(975, 250));
        sfSound_play(g->s->besart);
    }
    sfSprite_setTextureRect(g->ps->names, g->ps->rect);
}

void	change_state(game_t *g, sfEvent event, \
    sfRenderWindow *window)
{
    sfMouseButtonEvent	mouse = event.mouseButton;

    if (event.type == sfEvtMouseButtonReleased) {
        if (g->state == -1 || g->state == 0)
            click_buttons_2(mouse, g);
        if (g->state == 0)
            click_buttons(mouse, g, window);
        if (g->state == -2) {
            change_player(mouse, g);
            change_player_2(mouse, g);
            player_changed(g);
        }
    }
    change_state_3(g, event, window);
}
