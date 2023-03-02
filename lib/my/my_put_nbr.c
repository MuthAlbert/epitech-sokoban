/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** my_put_nbr
*/

#include "../../include/my.h"

int my_put_nbr(int nb)
{
    if (nb > 2147483647 || nb < -2147483647)
        return (0);
    if (nb < 0) {
        my_putchar('-');
        my_put_nbr(-nb);
        return (0);
    }
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    } else
        my_putchar(nb + '0');
    return (0);
}
