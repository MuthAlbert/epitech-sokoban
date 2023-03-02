/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-albert.muth
** File description:
** get_box_pos
*/

#include "../include/my.h"

int *get_box_pos(char **map)
{
    int *boxpos = malloc(sizeof(int) * 2);

    for (int i = 0; map[i] != NULL; i++) {
        for (int j = 0; map[i][j] != '\0'; j++) {
            get_box_pos2(map, i, j, boxpos);
        }
    }
    return (boxpos);
}

int *get_box_pos2(char **map, int i, int j, int *boxpos)
{
    if (map[i][j] == 'X') {
        boxpos[0] = i;
        boxpos[1] = j;
    }
    return 0;
}
