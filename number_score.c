/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** number_score
*/

#include "my.h"

char	*get_str(int nb)
{
    int i = 1;
    int nbr = nb;
    int j;
    int k = 0;
    char *str = malloc(sizeof(char) * 10);

    while (nb > 9) {
        nb = nb / 10;
        i = i * 10;
    }
    while (i > 0) {
        j = (nbr / i) % 10;
        str[k] = j + '0';
        k++;
        i = i / 10;
    }
    str[k] = 0;
    return (str);
}
