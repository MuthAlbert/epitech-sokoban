/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-myls-albert.muth
** File description:
** my_strcmp
*/

#include "../../include/my.h"

int my_strcmp(char const *s1, char const *s2)
{
    while (*s1 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}
