/*
** EPITECH PROJECT, 2022
** my_strlen
** File description:
** my_strlen
*/

#include "../../include/my.h"

int my_strlen(char const *str)
{
    int c = 0;
    for (int i = 0; str[i]; i++)
        c++;
    return (c);
}
