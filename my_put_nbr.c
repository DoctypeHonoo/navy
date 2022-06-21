/*
** EPITECH PROJECT, 2021
** my_put_nbr.c
** File description:
** task01
*/

#include <unistd.h>
#include "include/my.h"

void my_putchar(char c);

int detect_sign(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        detect_sign(nb / -10);
        my_putchar((nb % 10) * -1 + '0');
    }
    if (nb > 0) {
        detect_sign(nb / 10);
        my_putchar(nb % 10 + '0');
    }
    return 0;
}

int my_put_nbr(int nb)
{
    if (nb == 0) {
        my_putchar('0');
        return 0;
    }
    detect_sign(nb);
    return 0;
}