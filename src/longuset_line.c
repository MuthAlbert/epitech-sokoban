/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-albert.muth
** File description:
** longuset_line
*/

#include "../include/my.h"

int longuest_line(char *buffer)
{
    int biggest_line = 0;
    int tmp = 0;

    for (int m = 0; buffer[m] != '\0'; m++) {
        if (buffer[m] == '\n') {
            tmp = 0;
            continue;
        }
        tmp++;
        if (tmp > biggest_line)
            biggest_line = tmp;
    }
    return (biggest_line);
}
