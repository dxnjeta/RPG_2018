/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** map_count
*/

#include "my.h"

int	count_lines(char **map)
{
    int	i = 0;

    while (map[i])
        i++;
    return (i);
}

int	count_cols(char **map)
{
    int	j = 0;

    while (map[0][j])
        j++;
    return (j);
}
