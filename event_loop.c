/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** event_loop
*/

#include "my.h"

static	void	get_switch_2(sfEvent event, game_t *g, char **map)
{
    float y = sfSprite_getPosition(g->p->player).x;
    float x = sfSprite_getPosition(g->p->player).y;
    int	j = count_cols(map);
    int s = x / 80.0;
    int z = y / 80.0;

    if (event.key.code == sfKeyRight && (j - z) > 0 && \
    (map[s][z + 1] == '9' || map[s][z + 1] == '*' || \
    map[s][z + 1] == 'c' || map[s][z + 1] == '1' || \
    map[s][z + 1] == 'x' || map[s][z + 1] == 'z' || \
    map[s][z + 1] == '.' || map[s][z + 1] == '-' || \
    map[s][z + 1] == 'C' || map[s][z + 1] == 'B' || \
    map[s][z + 1] == 'A' || map[s][z + 1] == 'D' || \
    map[s][z + 1] == 'E' || \
    map[s][z + 1] == '#' || map[s][z + 1] == '+')) {
        g->p->rect.top = 128;
        move_right(g);
    }
}

static	void	get_switch_3(sfEvent event, game_t *g, char **map)
{
    float y = sfSprite_getPosition(g->p->player).x;
    float x = sfSprite_getPosition(g->p->player).y;
    int	j = count_cols(map);
    int s = x / 80.0;
    int z = y / 80.0;

    if (event.key.code == sfKeyLeft && z > 0 && \
    (map[s][z - 1] == '9' || map[s][z - 1] == '*' || \
    map[s][z - 1] == 'c' || map[s][z - 1] == 'x' || \
    map[s][z - 1] == '1' || map[s][z - 1] == 'z' || \
    map[s][z - 1] == '.' || map[s][z - 1] == '-' || \
    map[s][z - 1] == 'C' || map[s][z - 1] == 'B' || \
    map[s][z - 1] == 'E' || map[s][z - 1] == 'A' || \
    map[s][z - 1] == 'D' || \
    map[s][z - 1] == '#' || map[s][z - 1] == '+')) {
        g->p->rect.top = 64;
        move_left(g);
    }
}

static	void	get_switch(sfEvent event, game_t *g, char **map)
{
    float y = sfSprite_getPosition(g->p->player).x;
    float x = sfSprite_getPosition(g->p->player).y;
    int	i = count_lines(map);
    int s = x / 80.0;
    int z = y / 80.0;

    if (event.key.code == sfKeyDown && (i - s) > 0 && \
    (map[s + 1][z] == '9' || map[s + 1][z] == '*' || \
    map[s + 1][z] == 'c' || map[s + 1][z] == '1' || \
    map[s + 1][z] == 'x' || map[s + 1][z] == 'z' || \
    map[s + 1][z] == '.' || map[s + 1][z] == '-' || \
    map[s][z - 1] == 'C' || map[s][z - 1] == 'B' || \
    map[s][z - 1] == 'A' || map[s][z - 1] == 'E' || \
    map[s][z - 1] == 'D' || \
    map[s + 1][z] == '#' || map[s + 1][z] == '+')) {
        g->p->rect.top = 0;
        move_down(g);
    }
}

static	void	get_switch_4(sfEvent event, game_t *g, char **map)
{
    float y = sfSprite_getPosition(g->p->player).x;
    float x = sfSprite_getPosition(g->p->player).y;
    int	i = count_lines(map);
    int s = x / 80.0;
    int z = y / 80.0;

    if (event.key.code == sfKeyUp && s > 0 && \
    (map[s - 1][z] == '9' || map[s - 1][z] == '*' || \
    map[s - 1][z] == 'x' || map[s - 1][z] == 'z' || \
    map[s - 1][z] == 'c' || map[s - 1][z] == '1' || \
    map[s - 1][z] == '.' || map[s - 1][z] == '-' || \
    map[s - 1][z] == 'C' || map[s - 1][z] == 'B' || \
    map[s - 1][z] == 'D' || map[s - 1][z] == 'E' || \
    map[s - 1][z] == 'A' || \
    map[s - 1][z] == '#' || map[s - 1][z] == '+')) {
        g->p->rect.top = 192;
        move_up(g);
    }
}

void	player_move(sfEvent event, game_t *g, char **map)
{
    if (event.type == sfEvtKeyPressed && (event.key.code == sfKeyUp || \
    event.key.code == sfKeyDown || event.key.code == sfKeyLeft || \
    event.key.code == sfKeyRight)) {
        sfSound_play(g->s->move);
        sfSound_setLoop(g->s->move, sfTrue);
        get_switch(event, g, map);
        get_switch_2(event, g, map);
        get_switch_3(event, g, map);
        get_switch_4(event, g, map);
        sfSprite_setTextureRect(g->p->player, g->p->rect);
        player_animation(g->p);
    }
    sfSound_setLoop(g->s->move, sfFalse);
}
