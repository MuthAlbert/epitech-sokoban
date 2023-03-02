/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-albert.muth
** File description:
** get_map
*/

#include "../include/my.h"

char **get_map2(char *buffer, char **map, int hei, int wei)
{
    wei = longuest_line(buffer);
    hei = colone_line(buffer);

    for (int m = 0; m < hei; m++)
        map[m] = malloc(sizeof(char) * (wei + 1));
}

char **get_map(char *buffer)
{
    int wei = longuest_line(buffer);
    int hei = colone_line(buffer);
    int k = 0;
    char **map = malloc(sizeof(char *) * (hei + 1));

    get_map2(buffer, map, hei, k);
    for (int m = 0, w = 0; buffer[m] != '\0'; m++) {
        if (buffer[m] == '\n') {
            w = 0;
            k++;
            continue;
        }
        map[k][w] = buffer[m];
        w++;
        if (buffer[m + 1] == '\0' || buffer[m + 1] == '\n')
            map[k][w + 1] = '\0';
    }
    map[k + 1] = NULL;
    return (map);
}
