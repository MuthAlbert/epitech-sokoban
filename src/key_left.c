/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-albert.muth
** File description:
** key_left
*/

#include "../include/my.h"

int key_left(char **map, int *playerpos, int key)
{
    if (key == KEY_LEFT) {
        if (map[playerpos[0]][playerpos[1] - 1] == '#')
            return 0;
        key_left2(map, playerpos);
    }
    return 0;
}

int key_left2(char **map, int *playerpos)
{
    if (map[playerpos[0]][playerpos[1] - 1] == 'X'
        && map[playerpos[0]][playerpos[1] - 2] != '#') {
        map[playerpos[0]][playerpos[1]] = ' ';
        map[playerpos[0]][playerpos[1] - 1] = 'P';
        map[playerpos[0]][playerpos[1] - 2] = 'X';
        playerpos[1] -= 1;
    } else if (map[playerpos[0]][playerpos[1] - 1] != 'X') {
        map[playerpos[0]][playerpos[1]] = ' ';
        map[playerpos[0]][playerpos[1] - 1] = 'P';
        playerpos[1] -= 1;
    }
    return 0;
}
