/*
** EPITECH PROJECT, 2022
** B-PSU-101-MPL-1-1-navy-mohamed-amine.rouita
** File description:
** main
*/

#include <unistd.h>
#include "include/my.h"
#include <stdarg.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

void make_serv(game_info_t *game_info)
{
    game_info->my_pid = getpid();
    my_putstr("my_pid: ");
    my_put_nbr(getpid());
    my_putstr("\nwaiting for enemy connection...\n");
    my_putstr("\nenemy connected\n");
}

void make_cli(char **av, game_info_t *game_info)
{
    game_info->my_pid = getpid();
    game_info->en_pid = my_getnbr(av[1]);
    my_putstr("my_pid: ");
    my_put_nbr(getpid());
    my_putstr("\nsuccessfully connected\n");
}

int main(int ac, char **av)
{
    game_info_t game_info = {0, 0};
    char *filepath;

    if (ac != 2 && ac != 3) {
        return (84);
    }
    if (ac == 2) {
        filepath = av[1];
        make_serv(&game_info);
    } else {
        filepath = av[2];
        make_cli(av, &game_info);
    }
    return 0;
}