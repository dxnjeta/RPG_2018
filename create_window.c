/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** window
*/

#include "my.h"

sfRenderWindow	*create_my_window(unsigned int width, \
    unsigned int height)
{
    sfRenderWindow	*window;
    sfVideoMode	video_mode;

    video_mode.width = width;
    video_mode.height = height;
    video_mode.bitsPerPixel = 32;
    window = sfRenderWindow_create(video_mode, "My RPG", \
    sfClose, NULL);
    return (window);
}

view_create_t	*get_view(view_create_t *v, game_t *g)
{
    v->rectangle.left = 0;
    v->rectangle.top = 0;
    v->rectangle.width = g->screen_dx;
    v->rectangle.height = g->screen_dy;
    v->viewport.left = 0;
    v->viewport.top = 0;
    v->viewport.width = 1.0f;
    v->viewport.height = 1.0f;
    v->view = sfView_create();
    sfView_reset(v->view, v->rectangle);
    sfView_setViewport(v->view, v->viewport);
    sfView_setCenter(v->view, set_position(600, 500));
    v->position.x = 0;
    v->position.y = 0;
    return (v);
}
