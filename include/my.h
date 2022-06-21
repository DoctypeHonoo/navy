/*
** EPITECH PROJECT, 2021
** B-PSU-100-MPL-1-1-myprintf-mohamed-amine.rouita
** File description:
** my
*/

#include <stdarg.h>

    #ifndef __MY_H__
    #define _MY_H__

typedef struct game_info_s {
    int my_pid;
    int en_pid;
    int boat_nbr;
} game_info_t;

int my_getnbr(char const *str);
void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);
void make_serv(game_info_t *game_info);
void make_cli(char **av, game_info_t *game_info);

#endif /* __MY_H__*/
