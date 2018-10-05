/*
** EPITECH PROJECT, 2018
** rush 1 - 1 
** File description:
** rush 1 1 
*/

#include "my.h"
#include <unistd.h>

static void draw_line(int x, char border, char in)
{
    int i = 0;

    while (i != x) {
        if (i == 0 || i == x - 1)
            my_putchar(border);
        else
            my_putchar(in);
        i += 1;
    }
}

static void display_rush1(int x, int y)
{
    int i = 0;

    while (i != y) {
        if (i == 0 || i == y - 1)
            draw_line(x, 'o', '-');
        else
            draw_line(x, '|', ' ');
        i += 1;
        my_putchar('\n');
    }
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0)
        write(2, "Invalid size\n", 13);
    else if (x == 1 && y == 1) {
        my_putchar('o');
        my_putchar('\n');
    } else
        display_rush1(x, y);
}
