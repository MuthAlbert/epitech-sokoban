/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-albert.muth
** File description:
** base_octal
*/

#include "../../include/my.h"

int base_octal(unsigned int nb)
{
    int octal = 8;
    int rest;

    if (nb >= 0) {
        if (nb >= octal) {
            rest = (nb % octal);
            nb = (nb - rest) / octal;
            base_octal(nb);
            my_put_nbr(rest);
        } else
            my_put_nbr(nb % octal);
    }
    return (0);
}
