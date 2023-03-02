/*
** EPITECH PROJECT, 2022
** my_h
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_
    #include <stdlib.h>
    #include <stdio.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <unistd.h>
    #include <stdarg.h>
    #include <dirent.h>
    #include <ncurses.h>

//lib
int my_put_nbr(int nb);
int my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);
void my_swap(int *a, int *b);
int my_strcmp(char const *s1, char const *s2);

char **my_str_to_word_array(char const *str);
int count_word(char const *str);
int get_new(char const *str, int i);
char *add_word(char const *str, int start, int new);
int is_alphanum(char c);

//my_printf
int my_printf(const char *format, ...);
int base_binary(unsigned int nb);
int my_put_nb_base(int nb, char *base);
int base_octal(unsigned int nb);
int base_hexa(unsigned long nb);
int my_put_nbr_hexa(unsigned int nb);
int base_hexa_x(unsigned int nb);
int my_put_nbr_hexa_x(unsigned int nb);
int base_p(void *nb);
int base_s(char *str);
int base_s2(char *str, int i);
int flags(const char *format, int i, va_list ap, int count);
int flags2(const char *format, int i, va_list ap);
int my_put_nbr_pos(unsigned int nb);

//sokoban
char *open_file(char *filepath);
int refrechewin(char **map);
char help(void);
int longuest_line(char *buffer);
int colone_line(char *buffer);

char **get_map(char *buffer);
char **get_map2(char *buffer, char **map, int hei, int wei);
int *get_player_pos(char **map);
int *get_player_pos2(char **map, int i, int j, int *playerpos);
int *get_box_pos(char **map);
int *get_box_pos2(char **map, int i, int j, int *storagepos);
int *get_storage_pos(char **map);
int *get_storage_pos2(char **map, int i, int j, int *storagepos);

int move_player(char **map, int *playerpos, int key);
int key_right(char **map, int *playerpos, int key);
int key_right2(char **map, int *playerpos);
int key_left(char **map, int *playerpos, int key);
int key_left2(char **map, int *playerpos);
int key_up(char **map, int *playerpos, int key);
int key_up2(char **map, int *playerpos);
int key_down(char **map, int *playerpos, int key);
int key_down2(char **map, int *playerpos);
int win_condition(char **map, int *playerpos);

#endif /* !MY_H_ */
