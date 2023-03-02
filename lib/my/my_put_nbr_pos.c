/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-albert.muth
** File description:
** my_put_nbr_pos
*/

#include "../../include/my.h"

int my_put_nbr_pos(unsigned int nb)
{
    int count = 0;
    if (nb >= 10)
        my_put_nbr_pos(nb / 10);
    my_putchar(nb % 10 + '0');
    count++;
    return count;
}
