/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** pos_map
*/

#include "my.h"

void	check_lifes(game_t *g)
{
    switch (g->lrect.width) {
    case (180):
        g->life_left = 3;
        break;
    case (120):
        g->life_left = 2;
        break;
    case (60):
        g->life_left = 1;
        break;
    case (0):
        g->life_left = 0;
        break;
    }
}

void	check_diamonds(game_t *g)
{
    if (g->diamondss == 3)
        g->state = 8;
    if (g->life_left == 0 || g->time_left <= 0)
        g->state = 7;
}

static	void	put_player(char **map, game_t *g)
{
    float y = sfSprite_getPosition(g->p->player).x;
    float x = sfSprite_getPosition(g->p->player).y;
    int s = x / 80.0;
    int z = y / 80.0;

    if (g->score >= 50) {
        for (int mapX = 0; mapX < count_cols(map); mapX++) {
            for (int mapY = 0; mapY < count_lines(map); mapY++) {
                if (map[mapY][mapX] == '3')
                    map[mapY][mapX] = '9';
            }
        }
    }
    if (map[s][z] == 'A' && sfKeyboard_isKeyPressed(sfKeySpace)) {
        sfSprite_setPosition(g->p->player, set_position(2160, 640));
    }
    if (map[s][z] == 'D' && sfKeyboard_isKeyPressed(sfKeySpace)) {
        sfSprite_setPosition(g->p->player, set_position(2480, 720));
    }
}

static	void	put_player_2(char **map, game_t *g)
{
    float y = sfSprite_getPosition(g->p->player).x;
    float x = sfSprite_getPosition(g->p->player).y;
    int s = x / 80.0;
    int z = y / 80.0;

    if ((map[s][z] == 'C' || map[s][z] == 'B' || \
    map[s][z] == 'E') && sfKeyboard_isKeyPressed(sfKeySpace)) {
        g->state = 9;
    }
    if ((map[s][z] == '.' || map[s][z] == '-') && \
    sfKeyboard_isKeyPressed(sfKeySpace)) {
        g->state = 10;
    }
}

void	border_map(char **map, sfRenderWindow *window, game_t *g)
{
    for (int mapX = 0; mapX < count_cols(map); mapX++) {
        for (int mapY = 0; mapY < count_lines(map); mapY++) {
            if (map[mapY][mapX] == 'B' || map[mapY][mapX] == '-' \
    || map[mapY][mapX] == 'D' || map[mapY][mapX] == 'A' \
    || map[mapY][mapX] == 'C' || map[mapY][mapX] == '.' \
    || map[mapY][mapX] == 'E') {
                sfSprite_setPosition(g->el->border, \
    set_position(mapX * 80, mapY * 80));
                sfRenderWindow_drawSprite(window, g->el->border, NULL);
            }
        }
    }
    put_player(map, g);
    put_player_2(map, g);
}
