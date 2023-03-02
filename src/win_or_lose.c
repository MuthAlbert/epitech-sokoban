/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-albert.muth
** File description:
** lose_condition
*/

#include "../include/my.h"

int win_condition(char **map, int *playerpos)
{
    int i = 0;
    int j = 0;
    int count = 0;

    while (map[i] != NULL) {
        while (map[i][j] != '\0') {
            if (map[i][j] == 'X')
                count++;
            j++;
        }
        j = 0;
        i++;
    }
    if (count == 0)
        return 1;
    return 0;
}
