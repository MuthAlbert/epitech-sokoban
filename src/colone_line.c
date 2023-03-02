/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-albert.muth
** File description:
** colone_line
*/

#include "../include/my.h"

int colone_line(char *buffer)
{
    int line = 1;

    for (int m = 0; buffer[m] != '\0'; m++) {
        if (buffer[m] == '\n')
            line++;
    }
    return (line);
}
