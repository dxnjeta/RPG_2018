/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** main
*/

#include "my.h"

int	main(int ac, char **av)
{
    sfRenderWindow	*window;
    game_t	*g = malloc(sizeof(game_t));
    char **map = NULL;

    if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
        map = get_map(av[1]);
        window = create_my_window(1200, 1000);
        sfRenderWindow_setFramerateLimit(window, FPS);
        display_window(window, g, map);
        free (g->p);
        free (g->t);
        free (g->m);
        free (g);
    } else if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h' && !av[1][2]) {
        usage_h();
    } else
        return (84);
    return (0);
}

void	game_state_2(game_t *g, sfRenderWindow *window, char **map)
{
    switch (g->state) {
    case (6):
        draw_settings(window, g);
        break;
    case (3):
        draw_pause(window, g);
        break;
    case (4):
        draw_inventory(window, g);
        break;
    case (8):
        draw_win(window, g);
        break;
    case (7):
        draw_loose(window, g);
        break;
    case (10):
        draw_nothing(window, g);
        break;
    }
}

void	game_state(game_t *g, sfRenderWindow *window, char **map)
{
    switch (g->state) {
    case (-1):
        draw_intro(window, g);
        break;
    case (-2):
        draw_status(window, g);
        break;
    case (0):
        draw_menu(window, g);
        break;
    case (1):
        draw_game(window, g, map);
        punch_animation(g->a);
        break;
    case (2):
        draw_howtoplay(window, g);
        break;
    case (9):
        draw_nothing_2(window, g);
        break;
    }
    game_state_2(g, window, map);
}

void	read_map(char **map, sfRenderWindow *window, game_t *g)
{
    two_three_four(map, window, g);
    five_six_seven(map, window, g);
    eight_nine_one(map, window, g);
    water(map, window, g);
    water_edge(map, window, g);
    water_edge_2(map, window, g);
    walk_edge_2(map, window, g);
    coin_diamonds(map, window, g);
    border_map(map, window, g);
    check_lifes(g);
    check_diamonds(g);
}

void	display_window(sfRenderWindow *window, game_t *g, char **map)
{
    g = game();
    while (sfRenderWindow_isOpen(window)) {
        game_state(g, window, map);
        event_loop(window, g, map);
        animation(g->m);
        sfRenderWindow_setView(window, g->v->view);
        sfRenderWindow_display(window);
    }
    destroy_sprites(g);
    sfRenderWindow_destroy(window);
}
