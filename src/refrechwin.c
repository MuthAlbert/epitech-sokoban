/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-albert.muth
** File description:
** win
*/

#include "../include/my.h"

int refrechewin(char **map)
{
    int *playerpos = get_player_pos(map);
    int *boxpos = get_box_pos(map);
    int *storagepos = get_storage_pos(map);
    int key = 0;

    initscr();
    keypad(stdscr, TRUE);
    while (1) {
        clear();
        for (int i = 0; map[i] != NULL; i++)
            printw("%s\n", map[i]);
        refresh();
        key = getch();
        move_player(map, playerpos, key);
        win_condition(map, playerpos);
    }
    endwin();
    return 0;
}
