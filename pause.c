/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** pause
*/

#include "my.h"

void	button_pause(game_t *g, sfMouseMoveEvent mousem, \
    sfMouseButtonEvent mouse)
{
    if (g->state == 3) {
        play_button(mousem, g, mouse);
        ins_button(mousem, g, mouse);
        settings_button(mousem, g, mouse);
    }
}
