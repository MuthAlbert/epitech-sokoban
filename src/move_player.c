/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-albert.muth
** File description:
** move_player
*/

#include "../include/my.h"

int move_player(char **map, int *playerpos, int key)
{
    key_right(map, playerpos, key);
    key_left(map, playerpos, key);
    key_up(map, playerpos, key);
    key_down(map, playerpos, key);
    // lose_condition(map, playerpos);
    return 0;
}
