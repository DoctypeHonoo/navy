/*
** EPITECH PROJECT, 2022
** B-PSU-101-MPL-1-1-navy-mohamed-amine.rouita
** File description:
** map
*/

#include <stdlib.h>
#include "include/my.h"
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>

char **map_in_enemy(void)
{
    char **e_map = malloc(sizeof(char *) * 10);

    for (int var = 0; var != 12; var++) {
        e_map[var] = malloc(sizeof(char) * 20);
    }
    e_map[0] = " |A B C D E F G H\0";
    e_map[1] = "-+---------------\0";
    e_map[2] = "1|. . . . . . . .\0";
    e_map[3] = "2|. . . . . . . .\0";
    e_map[4] = "3|. . . . . . . .\0";
    e_map[5] = "4|. . . . . . . .\0";
    e_map[6] = "5|. . . . . . . .\0";
    e_map[7] = "6|. . . . . . . .\0";
    e_map[8] = "7|. . . . . . . .\0";
    e_map[9] = "8|. . . . . . . .\0";
    return (e_map);
}

char **my_map(char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char *buf = malloc(sizeof(char) * (179));
    read(fd, buf, 179);
    int var = 0;
    int var2 = 0;
    char **map_my = malloc(sizeof(char *) * 10);

    for (int var2 = 0; var2 != 11; var2++) {
        map_my[var2] = malloc(sizeof(char) * 20);
    }
    for (int count = 0; buf[count] != '\0'; var2++, count++) {
        map_my[var][var2] = buf[count];
        if (buf[count] == '\n') {
            map_my[var][var2 + 1] = '\0';
            var2 = 0;
            var += 1;
        }
    }
    return (map_my);
}