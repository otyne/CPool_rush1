/*
** EPITECH PROJECT, 2018
** rush 1 - 1 
** File description:
** rush 1 1 
*/

#include "my.h"
#include <unistd.h>

static void draw_line(int x, char border_left, char in, char border_right)
{
    int i = 0;

    while (i != x) {
        if (i == 0)
            my_putchar(border_left);
        else if (i == x - 1)
            my_putchar(border_right);
        else
            my_putchar(in);
        i += 1;
    }
}

static void display_rush2(int x, int y)
{
    int i = 0;

    while (i != y) {
        if (i == 0)
            draw_line(x, '/', '*', '\\');
        else if (i == y - 1)
            draw_line(x, '\\', '*', '/');
        else
            draw_line(x, '*', ' ', '*');
        i += 1;
        my_putchar('\n');
    }
}

void special_display2(int x, int y)
{
    int i = 0;

    if (x == 1 && y == 1) {
        my_putchar('*');
        my_putchar('\n');
    }
    else if (x == 1 && y != 1) {
        while (i != y) {
            my_putchar('*');
            my_putchar('\n');
            i += 1;
        }
    } else {
        while (i != x) {
            my_putchar('*');
            i += 1;
        }
        my_putchar('\n');
    }
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0)
        write(2, "Invalid size\n", 13);
    else if (x == 1 || y == 1)
        special_display2(x, y);
    else
        display_rush2(x, y);
}
