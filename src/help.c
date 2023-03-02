/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-albert.muth
** File description:
** help
*/

#include "../include/my.h"

char help(void)
{
    my_printf("USAGE\n");
    my_printf("\t./my_sokoban map\n");
    my_printf("DESCRIPTION\n");
    my_printf("\tmap file representing the warehouse map,");
    my_printf(" containing ’#’ for walls,\n");
    my_printf("\t\t’P’ for the player, ’X’ for boxes and");
    my_printf(" ’O’ for storage locations.\n");
}
