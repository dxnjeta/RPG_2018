/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** functions
*/

#include "my.h"

static	void	about_click(game_t *g, sfEvent event)
{
    if (event.type == sfEvtMouseButtonPressed) {
        sfSound_play(g->s->click);
        g->m->cursor.left = 80;
    } else
        g->m->cursor.left = 0;
    sfSprite_setTextureRect(g->m->curs, g->m->cursor);
}

void	get_cursor(game_t *g, sfVector2f p, sfEvent event)
{
    about_click(g, event);
    if (event.type == sfEvtMouseMoved) {
        sfSprite_setPosition(g->m->curs, p);
    }
}

sfVector2f	set_position(int x, int y)
{
    sfVector2f	position;

    position.x = x;
    position.y = y;
    return (position);
}

sfVector2i	set_position_int(int x, int y)
{
    sfVector2i	position;

    position.x = x;
    position.y = y;
    return (position);
}

sfVector2f	set_scale(float x, float y)
{
    sfVector2f	position;

    position.x = x;
    position.y = y;
    return (position);
}
