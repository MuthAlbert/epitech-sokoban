/*
** EPITECH PROJECT, 2022
** my_putchar
** File description:
** my_putchar
*/

#include <unistd.h>
#include "../../include/my.h"

int my_putchar(char c)
{
    int count = 0;
    write(1, &c, 1);
    count++;
    return count;
}
