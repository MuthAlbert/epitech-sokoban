/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-albert.muth
** File description:
** key_down
*/

#include "../include/my.h"

int key_down(char **map, int *playerpos, int key)
{
    if (key == KEY_DOWN) {
        if (map[playerpos[0] + 1][playerpos[1]] == '#')
            return 0;
        key_down2(map, playerpos);
    }
    return 0;
}

int key_down2(char **map, int *playerpos)
{
    if (map[playerpos[0] + 1][playerpos[1]] == 'X'
        && map[playerpos[0] + 2][playerpos[1]] != '#') {
        map[playerpos[0]][playerpos[1]] = ' ';
        map[playerpos[0] + 1][playerpos[1]] = 'P';
        map[playerpos[0] + 2][playerpos[1]] = 'X';
        playerpos[0] += 1;
    } else if (map[playerpos[0] + 1][playerpos[1]] != 'X') {
        map[playerpos[0]][playerpos[1]] = ' ';
        map[playerpos[0] + 1][playerpos[1]] = 'P';
        playerpos[0] += 1;
    }
    return 0;
}
