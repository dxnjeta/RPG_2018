/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** pos_map
*/

#include "my.h"

static	void	collision_2(char **map, game_t *g)
{
    float y = sfSprite_getPosition(g->p->player).x;
    float x = sfSprite_getPosition(g->p->player).y;
    int s = x / 80.0;
    int z = y / 80.0;

    if (map[s][z] == '+' && (g->a->rect.top == 180 || \
    g->a->rect.top == 120))
        g->boks++;
    if (g->boks > 0)
        g->lrect.width = 120;
    if (g->boks > 30) {
        g->lrect.width = 60;
    }
    if (g->boks > 60) {
        g->lrect.width = 0;
    }
    if (g->boks == 1 || g->boks == 31 || g->boks == 61)
        sfSound_play(g->s->life);
    sfSprite_setTextureRect(g->lifes, g->lrect);
}

static	void	collision(char **map, game_t *g)
{
    float y = sfSprite_getPosition(g->p->player).x;
    float x = sfSprite_getPosition(g->p->player).y;
    int s = x / 80.0;
    int z = y / 80.0;

    collision_2(map, g);
    if (map[s][z] == '*') {
        g->score++;
        sfSound_play(g->s->coin);
        g->sco = get_str(g->score);
        sfText_setString(g->sc, g->sco);
        map[s][z] = '9';
    }
    if (map[s][z] == '#') {
        g->drect.width += 70;
        g->diamondss++;
        sfSound_play(g->s->diamond);
        map[s][z] = '9';
    }
    sfSprite_setTextureRect(g->diamonds, g->drect);
}

void	coin_diamonds(char **map, sfRenderWindow *window, game_t *g)
{
    for (int mapX = 0; mapX < count_cols(map); mapX++) {
        for (int mapY = 0; mapY < count_lines(map); mapY++) {
            if (map[mapY][mapX] == '*') {
                sfSprite_setPosition(g->el->walk, \
    set_position(mapX * 80, mapY * 80));
                sfRenderWindow_drawSprite(window, g->el->walk, NULL);
                sfSprite_setPosition(g->el->coin, \
    set_position(mapX * 80, mapY * 80));
                sfRenderWindow_drawSprite(window, g->el->coin, NULL);
            }
            if (map[mapY][mapX] == '#') {
                sfSprite_setPosition(g->el->walk, \
    set_position(mapX * 80, mapY * 80));
                sfRenderWindow_drawSprite(window, g->el->walk, NULL);
                sfSprite_setPosition(g->el->dia, \
    set_position(mapX * 80, mapY * 80));
                sfRenderWindow_drawSprite(window, g->el->dia, NULL);
            }
        }
    }
}

void	water_edge_2(char **map, sfRenderWindow *window, game_t *g)
{
    for (int mapX = 0; mapX < count_cols(map); mapX++) {
        for (int mapY = 0; mapY < count_lines(map); mapY++) {
            if (map[mapY][mapX] == 'i') {
                sfSprite_setPosition(g->el->d->water6, \
    set_position(mapX * 80, mapY * 80));
                sfRenderWindow_drawSprite(window, g->el->d->water6, NULL);
            }
            if (map[mapY][mapX] == 'o') {
                sfSprite_setPosition(g->el->d->water7, \
    set_position(mapX * 80, mapY * 80));
                sfRenderWindow_drawSprite(window, g->el->d->water7, NULL);
            }
            if (map[mapY][mapX] == 'p') {
                sfSprite_setPosition(g->el->d->water8, \
    set_position(mapX * 80, mapY * 80));
                sfRenderWindow_drawSprite(window, g->el->d->water8, NULL);
            }
        }
    }
    collision(map, g);
}

void	walk_edge_2(char **map, sfRenderWindow *window, game_t *g)
{
    for (int mapX = 0; mapX < count_cols(map); mapX++) {
        for (int mapY = 0; mapY < count_lines(map); mapY++) {
            if (map[mapY][mapX] == 'c') {
                sfSprite_setPosition(g->el->walk1, \
    set_position(mapX * 80, mapY * 80));
                sfRenderWindow_drawSprite(window, g->el->walk1, NULL);
            }
            if (map[mapY][mapX] == 'x') {
                sfSprite_setPosition(g->el->walk2, \
    set_position(mapX * 80, mapY * 80));
                sfRenderWindow_drawSprite(window, g->el->walk2, NULL);
            }
            if (map[mapY][mapX] == 'z') {
                sfSprite_setPosition(g->el->walk4, \
    set_position(mapX * 80, mapY * 80));
                sfRenderWindow_drawSprite(window, g->el->walk4, NULL);
            }
        }
    }
}
