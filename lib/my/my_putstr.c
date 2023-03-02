/*
** EPITECH PROJECT, 2022
** my_putstr
** File description:
** my_putstr
*/

#include "../../include/my.h"

int my_putstr(char const *str)
{
    int count = 0;
    for (int i = 0; str[i]; i++) {
        my_putchar(str[i]);
        count++;
    }
    return count;
}
