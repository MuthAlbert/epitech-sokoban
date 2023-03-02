/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-albert.muth
** File description:
** base_e
*/

#include "../../include/my.h"

int my_put_nb_base(int nb, char *base)
{
    int len = my_strlen(base);
    int i = 0;
    int n = nb;

    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb == 0)
        my_putchar(base[0]);
    while (nb != 0) {
        i = nb % len;
        my_putchar(base[i]);
        nb = nb / len;
    }
    return (0);
}
