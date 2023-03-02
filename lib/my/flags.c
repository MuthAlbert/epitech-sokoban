/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-albert.muth
** File description:
** flags
*/

#include "../../include/my.h"

int flags(const char *format, int i, va_list ap, int count)
{
    if (format[i] == 's')
        count = my_putstr(va_arg(ap, char *));
    if (format[i] == 'c')
        count = my_putchar(va_arg(ap, int));
    if (format[i] == '%')
        count = my_putchar('%');
    if (format[i] == 'p')
        count = base_p(va_arg(ap, void *));
    if (format[i] == 'S')
        count = base_s(va_arg(ap, char *));
    if (format[i] == 'b')
        count = base_binary(va_arg(ap, unsigned int));
    if (format[i] == 'u')
        count = my_put_nbr_pos(va_arg(ap, unsigned int));
    flags2(format, i, ap);
    return (count);
}

int flags2(const char *format, int i, va_list ap)
{
    int nb = 0;
    if (format[i] == 'x')
        base_hexa(va_arg(ap, unsigned int));
    if (format[i] == 'X')
        base_hexa_x(va_arg(ap, unsigned int));
    if (format[i] == 'o')
        base_octal(va_arg(ap, unsigned int));
    if (format[i] == 'd' || format[i] == 'i')
        my_put_nbr(va_arg(ap, int));
}
