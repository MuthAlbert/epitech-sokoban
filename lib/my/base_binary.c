/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-albert.muth
** File description:
** base_binary
*/

#include "../../include/my.h"

int base_binary(unsigned int nb)
{
    int count = 0;
    if (nb >= 2)
        base_binary(nb / 2);
    my_putchar(nb % 2 + '0');
    count++;
    return count;
}
