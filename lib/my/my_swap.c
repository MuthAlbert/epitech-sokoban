/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-myls-albert.muth
** File description:
** my_swap
*/

#include "../../include/my.h"

void my_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
