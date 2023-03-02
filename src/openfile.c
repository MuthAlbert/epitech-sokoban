/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-albert.muth
** File description:
** openfile_
*/

#include "../include/my.h"

char *open_file(char *filepath)
{
    struct stat stats;
    int i;
    char *buffer;

    i = open(filepath, O_RDONLY);
    if (i == -1) {
        exit(84);
    }
    stat(filepath, &stats);
    buffer = malloc(sizeof(char) * (stats.st_size + 1));
    read(i, buffer, stats.st_size);
    buffer[stats.st_size + 1] = '\0';
    close(i);
    return (buffer);
}
