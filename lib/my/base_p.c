/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-albert.muth
** File description:
** base_p
*/

#include "../../include/my.h"

int base_p(void *nb)
{
    int count = 0;
    if (nb == 0)
        my_putstr("nil");
    else {
        my_putstr("0x");
        base_hexa((unsigned long)nb);
        count++;
    }
    return count;
}
