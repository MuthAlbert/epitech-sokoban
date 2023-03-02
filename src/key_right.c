/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-albert.muth
** File description:
** key_right
*/

#include "../include/my.h"

int key_right(char **map, int *playerpos, int key)
{
    if (key == KEY_RIGHT) {
        if (map[playerpos[0]][playerpos[1] + 1] == '#')
            return 0;
        key_right2(map, playerpos);
    }
    return 0;
}

int key_right2(char **map, int *playerpos)
{
    if (map[playerpos[0]][playerpos[1] + 1] == 'X'
        && map[playerpos[0]][playerpos[1] + 2] != '#') {
        map[playerpos[0]][playerpos[1]] = ' ';
        map[playerpos[0]][playerpos[1] + 1] = 'P';
        map[playerpos[0]][playerpos[1] + 2] = 'X';
        playerpos[1] += 1;
    } else if (map[playerpos[0]][playerpos[1] + 1] != 'X') {
        map[playerpos[0]][playerpos[1]] = ' ';
        map[playerpos[0]][playerpos[1] + 1] = 'P';
        playerpos[1] += 1;
    }
    return 0;
}
