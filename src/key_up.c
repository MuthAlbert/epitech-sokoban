/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-albert.muth
** File description:
** key
*/

#include "../include/my.h"

int key_up(char **map, int *playerpos, int key)
{
    if (key == KEY_UP) {
        if (map[playerpos[0] - 1][playerpos[1]] == '#')
            return 0;
        key_up2(map, playerpos);
    }
    return 0;
}

int key_up2(char **map, int *playerpos)
{
    if (map[playerpos[0] - 1][playerpos[1]] == 'X'
        && map[playerpos[0] - 2][playerpos[1]] != '#') {
        map[playerpos[0]][playerpos[1]] = ' ';
        map[playerpos[0] - 1][playerpos[1]] = 'P';
        map[playerpos[0] - 2][playerpos[1]] = 'X';
        playerpos[0] -= 1;
    } else if (map[playerpos[0] - 1][playerpos[1]] != 'X') {
        map[playerpos[0]][playerpos[1]] = ' ';
        map[playerpos[0] - 1][playerpos[1]] = 'P';
        playerpos[0] -= 1;
    }
    return 0;
}
