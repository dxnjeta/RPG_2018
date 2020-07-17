/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** movement
*/

#include "my.h"

void	move_right(game_t *g)
{
    sfSprite_move(g->p->player, g->p->right);
}

void	move_down(game_t *g)
{
    sfSprite_move(g->p->player, g->p->down);
}

void	move_left(game_t *g)
{
    sfSprite_move(g->p->player, g->p->left);
}

void	move_up(game_t *g)
{
    sfSprite_move(g->p->player, g->p->up);
}
