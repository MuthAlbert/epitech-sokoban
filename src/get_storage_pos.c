/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-albert.muth
** File description:
** get_storage_pos
*/

#include "../include/my.h"

int *get_storage_pos(char **map)
{
    int *storagepos = malloc(sizeof(int) * 2);

    for (int i = 0; map[i] != NULL; i++) {
        for (int j = 0; map[i][j] != '\0'; j++) {
            get_storage_pos2(map, i, j, storagepos);
        }
    }
    return (storagepos);
}

int *get_storage_pos2(char **map, int i, int j, int *storagepos)
{
    if (map[storagepos[0]][storagepos[1]] == 'O')
        return 0;
    if (map[i][j] == 'O') {
        storagepos[0] = i;
        storagepos[1] = j;
    }
    return 0;
}
