/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-albert.muth
** File description:
** main
*/

#include "include/my.h"
#include <ncurses.h>

int main(int ac, char **av)
{
    if (ac == 1)
        return 84;
    if (av[1][0] == '-' && av[1][1] == 'h') {
        help();
        return 0;
    }
    char **map = get_map(open_file(av[1]));
    if (ac == 2)
        refrechewin(map);
    return 0;
}
