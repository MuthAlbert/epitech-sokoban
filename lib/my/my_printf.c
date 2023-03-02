/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday13-albert.muth
** File description:
** create_window
*/

#include "../../include/my.h"
#include <stdio.h>

int my_printf(const char *format, ...)
{
    va_list ap;
    int i = 0;
    int count;
    int v = 0;
    int fin;

    va_start(ap, format);
    while (format[i] != '\0') {
        if (format[i] == '%') {
            i++;
            count = flags(format, i, ap, count);
        } else {
            my_putchar(format[i]);
            v++;
        }
        i++;
    }
    fin = count + v;
    va_end(ap);
    return (fin);
}
