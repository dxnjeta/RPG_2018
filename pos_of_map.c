/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** map_pos
*/

#include "my.h"

void	eight_nine_one(char **map, sfRenderWindow *window, game_t *g)
{
    for (int mapX = 0; mapX < count_cols(map); mapX++) {
        for (int mapY = 0; mapY < count_lines(map); mapY++) {
            if (map[mapY][mapX] == '8') {
                sfSprite_setPosition(g->el->stone, \
    set_position(mapX * 80, mapY * 80));
                sfRenderWindow_drawSprite(window, g->el->stone, NULL);
            }
            if (map[mapY][mapX] == '9' || map[mapY][mapX] == '+') {
                sfSprite_setPosition(g->el->walk, \
    set_position(mapX * 80, mapY * 80));
                sfRenderWindow_drawSprite(window, g->el->walk, NULL);
            }
            if (map[mapY][mapX] == '1') {
                sfSprite_setPosition(g->el->walk3, \
    set_position(mapX * 80, mapY * 80));
                sfRenderWindow_drawSprite(window, g->el->walk3, NULL);
            }
        }
    }
}

void	five_six_seven(char **map, sfRenderWindow *window, game_t *g)
{
    for (int mapX = 0; mapX < count_cols(map); mapX++) {
        for (int mapY = 0; mapY < count_lines(map); mapY++) {
            if (map[mapY][mapX] == '5') {
                sfSprite_setPosition(g->el->stone2, \
    set_position(mapX * 80, mapY * 80));
                sfRenderWindow_drawSprite(window, g->el->stone2, NULL);
            }
            if (map[mapY][mapX] == '6') {
                sfSprite_setPosition(g->el->stone3, \
    set_position(mapX * 80, mapY * 80));
                sfRenderWindow_drawSprite(window, g->el->stone3, NULL);
            }
            if (map[mapY][mapX] == '7') {
                sfSprite_setPosition(g->el->stone4, \
    set_position(mapX * 80, mapY * 80));
                sfRenderWindow_drawSprite(window, g->el->stone4, NULL);
            }
        }
    }
}

void	two_three_four(char **map, sfRenderWindow *window, game_t *g)
{
    for (int mapX = 0; mapX < count_cols(map); mapX++) {
        for (int mapY = 0; mapY < count_lines(map); mapY++) {
            if (map[mapY][mapX] == '3') {
                sfSprite_setPosition(g->el->d->lock, \
    set_position(mapX * 80, mapY * 80));
                sfRenderWindow_drawSprite(window, g->el->d->lock, NULL);
            }
            if (map[mapY][mapX] == '2') {
                sfSprite_setPosition(g->el->grass, \
    set_position(mapX * 80, mapY * 80));
                sfRenderWindow_drawSprite(window, g->el->grass, NULL);
            }
            if (map[mapY][mapX] == '4') {
                sfSprite_setPosition(g->el->stone1, \
    set_position(mapX * 80, mapY * 80));
                sfRenderWindow_drawSprite(window, g->el->stone1, NULL);
            }
        }
    }
}

void	water(char **map, sfRenderWindow *window, game_t *g)
{
    for (int mapX = 0; mapX < count_cols(map); mapX++) {
        for (int mapY = 0; mapY < count_lines(map); mapY++) {
            if (map[mapY][mapX] == 'w') {
                sfSprite_setPosition(g->el->water, \
    set_position(mapX * 80, mapY * 80));
                sfRenderWindow_drawSprite(window, g->el->water, NULL);
            }
            if (map[mapY][mapX] == 'e') {
                sfSprite_setPosition(g->el->d->water1, \
    set_position(mapX * 80, mapY * 80));
                sfRenderWindow_drawSprite(window, g->el->d->water1, NULL);
            }
            if (map[mapY][mapX] == 'r') {
                sfSprite_setPosition(g->el->d->water2, \
    set_position(mapX * 80, mapY * 80));
                sfRenderWindow_drawSprite(window, g->el->d->water2, NULL);
            }
        }
    }
}

void	water_edge(char **map, sfRenderWindow *window, game_t *g)
{
    for (int mapX = 0; mapX < count_cols(map); mapX++) {
        for (int mapY = 0; mapY < count_lines(map); mapY++) {
            if (map[mapY][mapX] == 't') {
                sfSprite_setPosition(g->el->d->water3, \
    set_position(mapX * 80, mapY * 80));
                sfRenderWindow_drawSprite(window, g->el->d->water3, NULL);
            }
            if (map[mapY][mapX] == 'y') {
                sfSprite_setPosition(g->el->d->water4, \
    set_position(mapX * 80, mapY * 80));
                sfRenderWindow_drawSprite(window, g->el->d->water4, NULL);
            }
            if (map[mapY][mapX] == 'u') {
                sfSprite_setPosition(g->el->d->water5, \
    set_position(mapX * 80, mapY * 80));
                sfRenderWindow_drawSprite(window, g->el->d->water5, NULL);
            }
        }
    }
}
