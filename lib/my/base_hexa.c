/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-albert.muth
** File description:
** my_nbr_hexa
*/

#include "../../include/my.h"

int base_hexa(unsigned long nb)
{
    int hexa = 16;
    int rest;

    if (nb >= 0) {
        if (nb >= hexa) {
            rest = (nb % hexa);
            nb = (nb - rest) / hexa;
            base_hexa(nb);
            my_put_nbr_hexa(rest);
        } else
            my_put_nbr_hexa(nb % hexa);
    }
    return (0);
}

int my_put_nbr_hexa(unsigned int nb)
{
    if (nb == 10)
        my_putchar('a');
    if (nb == 11)
        my_putchar('b');
    if (nb == 12)
        my_putchar('c');
    if (nb == 13)
        my_putchar('d');
    if (nb == 14)
        my_putchar('e');
    if (nb == 15)
        my_putchar('f');
    if (nb < 10)
        my_putchar(nb + '0');
    return (0);
}

int base_hexa_x(unsigned int nb)
{
    int hexa = 16;
    int rest;

    if (nb >= 0) {
        if (nb >= hexa) {
            rest = (nb % hexa);
            nb = (nb - rest) / hexa;
            base_hexa(nb);
            my_put_nbr_hexa_x(rest);
        } else
            my_put_nbr_hexa_x(nb % hexa);
    }
    return (0);
}

int my_put_nbr_hexa_x(unsigned int nb)
{
    if (nb == 10)
        my_putchar('A');
    if (nb == 11)
        my_putchar('B');
    if (nb == 12)
        my_putchar('C');
    if (nb == 13)
        my_putchar('D');
    if (nb == 14)
        my_putchar('E');
    if (nb == 15)
        my_putchar('F');
    if (nb < 10)
        my_putchar(nb + '0');
    return (0);
}
