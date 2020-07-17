/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** cursor
*/

#include "my.h"

static	void	change_state_5(game_t *g, sfEvent event, \
    sfRenderWindow *window)
{
    if (event.type == sfEvtKeyPressed) {
        if (g->state == 9 && event.key.code == sfKeyQ)
            g->state = 1;
        if (g->state == 10 && event.key.code == sfKeyQ)
            g->state = 1;
    }
}

static	void	click_buttons_paused(sfMouseButtonEvent mouse, \
    game_t *g, sfRenderWindow *window)
{
    if (mouse.x >= 460 && mouse.x <= 740 && \
    mouse.y >= 360 && mouse.y <= 480)
        g->state = 1;
    if (mouse.x >= 460 && mouse.x <= 740 && \
    mouse.y >= 510 && mouse.y <= 630)
        sfRenderWindow_close(window);
    if (mouse.x >= 460 && mouse.x <= 740 && \
    mouse.y >= 660 && mouse.y <= 780)
        g->state = 0;
}

void	change_state_4(game_t *g, sfEvent event, \
    sfRenderWindow *window)
{
    sfMouseButtonEvent	mouse = event.mouseButton;

    if (event.type == sfEvtMouseButtonReleased) {
        if (g->state == 3)
            click_buttons_paused(mouse, g, window);
    }
    change_state_5(g, event, window);
}
