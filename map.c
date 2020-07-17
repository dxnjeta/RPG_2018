/*
** EPITECH PROJECT, 2019
** map
** File description:
** my_rpg
*/

#include "my.h"

int	my_strlen(char *str)
{
    int j;

    j = 0;
    while (str[j]) {
        j = j + 1;
    }
    return (j);
}

char	*my_strdup(char *str)
{
    char *dest;
    int i = 0;

    if (!str)
        return (0);
    dest = malloc(sizeof(char) * 100);
    if (dest == 0)
        return (0);
    while (str[i]) {
        dest[i] = str[i];
        i++;
    }
    dest[i] = 0;
    return (dest);
}

int	my_strcmp(char *env, char *word)
{
    int i = my_strlen(env);
    int j = my_strlen(word);

    if (i != j)
        return (0);
    i = 0;
    while (i < j) {
        if (env[i] != word[i])
            return (0);
        i++;
    }
    return (1);
}

char	**get_new(char **map, char *line)
{
    char **map1 = NULL;
    int i = 0;

    while (map[i] != 0)
        i++;
    if (!(map1 = malloc(sizeof(char *) * (i + 2))))
        return (NULL);
    i = 0;
    while (map[i]) {
        map1[i] = (map[i]);
        i++;
    }
    map1[i] = my_strdup(line);
    map1[i + 1] = 0;
    return (map1);
}

char	**get_map(char *filename)
{
    char **map = NULL;
    char *line = NULL;
    FILE *fd = NULL;
    size_t len  = 0;

    if (!(map = malloc(sizeof(char *) * 1)))
        return (NULL);
    map[0] = 0;
    fd = fopen(filename, "r");
    while (getline(&line, &len, fd) != -1) {
        if ((line[my_strlen(line) - 1]) == '\n')
            line[my_strlen(line) - 1] = 0;
        map = get_new(map, line);
    }
    return (map);
}
