/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-albert.muth
** File description:
** base_s
*/

#include "../../include/my.h"

int base_s2(char *str, int i)
{
    if (str[i] >= 1 && str[i] <= 7) {
        my_putchar(48);
        my_putchar(48);
    }
    if (str[i] >= 8 && str[i] <= 63)
        my_putchar(48);
}

int base_s(char *str)
{
    int i = 0;
    int count = 0;
    while (str[i] != '\0') {
        if (str[i] < 32 || str[i] >= 127) {
            my_putstr("\\");
            base_s2(str, i);
            base_octal(str[i]);
            } else
                my_putchar(str[i]);
        i++;
        count++;
    }
    return count;
}
