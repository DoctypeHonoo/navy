/*
** EPITECH PROJECT, 2022
** B-PSU-101-MPL-1-1-navy-mohamed-amine.rouita
** File description:
** my_getnbr
*/

#include "include/my.h"

int my_getnbr(char const *str)
{
    int var = 1;
    int result = 0;

    while ('-' == *str || '+' == *str) {
        if (*str == '-') {
            var = var * -1;
        }
        str++;
    }
    while (*str >= '0' && *str <= '9') {
        result = result * 10 + *str - '0';
        str++;
    }
    return (result * var);
}
