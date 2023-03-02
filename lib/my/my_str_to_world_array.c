/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-albert.muth
** File description:
** str_to_world_array
*/

#include "../../include/my.h"
#include <stddef.h>
#include <stdlib.h>

int is_alphanum(char c)
{
    if ((c >= 48 && c <= 57) || (c >= 'a'
    && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 0;
    return 1;
}

char *add_word(char const *str, int start, int new)
{
    int i = 0;
    int j = start;
    int offset = new - start;
    char *word = malloc(sizeof(char) * offset + 1);
    word[offset] = '\0';

    while (j < new) {
        word[i] = str[j];
        i++;
        j++;
    }
    return (word);
}

int get_new(char const *str, int i)
{
    while (is_alphanum(str[i]) != 1 && str[i])
        i++;
    return (i);
}

int count_word(char const *str)
{
    int c = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if (is_alphanum(str[i]) == 0
            && is_alphanum(str[i + 1]) == 1)
            c++;
    return (c + 1);
}

char **my_str_to_word_array(char const *str)
{
    int start = 0;
    int new = get_new(str, start);
    int word = count_word(str);
    char **tab = malloc(sizeof(char *) * (word));

    if (str == NULL)
        return NULL;
    while (is_alphanum(str[start]) == 1)
        start++;
    for (int i = 0; i < word; i++) {
        tab[i] = add_word(str, start, new);
        start = new;
        while (is_alphanum(str[start]) == 1 && start < my_strlen(str))
            start++;
        new = get_new(str, start);
    }
    tab[word - 1] = NULL;
    return (tab);
}
