/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** the_state
*/

#include "my.h"

void	change_state_2(game_t *g, sfEvent event, \
    sfRenderWindow *window)
{
    if (event.type == sfEvtKeyPressed) {
        if (g->state == 1 && event.key.code == sfKeyI)
            g->state = 4;
        if (g->state == 2 && event.key.code == sfKeyReturn)
            g->state = 0;
        if (g->state == 4 && event.key.code == sfKeyReturn)
            g->state = 1;
    }
}

void	change_state_3(game_t *g, sfEvent event, \
    sfRenderWindow *window)
{
    if (event.type == sfEvtKeyReleased) {
        if (g->state == 1 && event.key.code == sfKeyEscape) {
            g->state = 3;
        }
        if (g->state == 6 && event.key.code == sfKeyEscape) {
            g->state = 0;
        }
        if (g->state == -2 && event.key.code == sfKeyReturn)
            g->state = 0;
    }
    change_state_2(g, event, window);
}

static	void	music_add(sfMouseButtonEvent mouse, game_t *g)
{
    if (mouse.x >= 463 && mouse.x <= 493 && \
    mouse.y >= 330 && mouse.y <= 360) {
        g->s->n -= 2;
        g->set->rect1.width -= 37.2;
        if (g->s->n <= 0)
            g->s->n = 0;
    }
    if (mouse.x >= 802 && mouse.x <= 832 && \
    mouse.y >= 330 && mouse.y <= 360) {
        g->s->n += 2;
        g->set->rect1.width += 37.2;
        if (g->s->n >= 40)
            g->s->n = 40;
    }
    sfSprite_setTextureRect(g->set->ssli2, g->set->rect1);
    sfSound_setVolume(g->s->background_s, g->s->n);
}

static	void	sound_add(sfMouseButtonEvent mouse, game_t *g)
{
    if (mouse.x >= 463 && mouse.x <= 493 && \
    mouse.y >= 180 && mouse.y <= 210) {
        g->s->m -= 2;
        g->set->rect.width -= 37.2;
        if (g->s->m <= 0)
            g->s->m = 0;
    }
    if (mouse.x >= 802 && mouse.x <= 832 && \
    mouse.y >= 180 && mouse.y <= 210) {
        g->s->m += 2;
        g->set->rect.width += 37.2;
        if (g->s->m >= 40)
            g->s->m = 40;
    }
    sfSprite_setTextureRect(g->set->sli2, g->set->rect);
    sfSound_setVolume(g->s->click, g->s->m);
    sfSound_setVolume(g->s->move, g->s->m);
    sfSound_setVolume(g->s->life, g->s->m);
    sfSound_setVolume(g->s->coin, g->s->m);
    sfSound_setVolume(g->s->diamond, g->s->m);
}

void	set_cursor(game_t *g, sfEvent event)
{
    sfMouseMoveEvent	mousem = event.mouseMove;
    sfMouseButtonEvent	mouse = event.mouseButton;

    if (event.type == sfEvtMouseMoved || \
    event.type == sfEvtMouseButtonPressed) {
        if (g->state == -1) {
            skip_button(mousem, g, mouse);
        }
        if (g->state == 0) {
            play_button(mousem, g, mouse);
            quit_button(mousem, g, mouse);
            ins_button(mousem, g, mouse);
            settings_button(mousem, g, mouse);
        }
        if (g->state == 6) {
            sound_add(mouse, g);
            music_add(mouse, g);
        }
        button_pause(g, mousem, mouse);
    }
}
