/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-albert.muth
** File description:
** player_pos
*/

#include "../include/my.h"

int *get_player_pos(char **map)
{
    int *playerpos = malloc(sizeof(int) * 2);

    for (int i = 0; map[i] != NULL; i++) {
        for (int j = 0; map[i][j] != '\0'; j++) {
            get_player_pos2(map, i, j, playerpos);
        }
    }
    return (playerpos);
}

int *get_player_pos2(char **map, int i, int j, int *playerpos)
{
    int key;

    if (map[i][j] == 'P') {
        playerpos[0] = i;
        playerpos[1] = j;
    }
    return 0;
}
