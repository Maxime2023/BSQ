/*
** EPITECH PROJECT, 2018
** col
** File description:
** col
*/

#include "../include/header.h"

char    **col_one(char *buf)
{
    int y = 0;
    int a = 0;
    int c = 0;
    int	d = 0;
    char **tab = malloc(sizeof(char *) * (y_lenght(buf)));

    for (int b = 0; b <= y_lenght(buf); b++)
        tab[b] = malloc(sizeof(char *) * (2));
    while (buf[a + start(buf)] != '\0') {
        if (buf[a + start(buf)] == '\n') {
            tab[y][1] = '\0';
            a++;
            y++;
        }
        tab[y][0] = buf[a + start(buf)];
        a++;
    }
    tab[y][1] = '\0';
    return (tab);
}

int    col(char *buf)
{
    char **tab = col_one(buf);
    int c = 0;
    int d = 0;
    while (c <= y_lenght(buf)) {
        if (tab[c][0] == '.') {
            tab[c][0] = 'x';
            break;
        }
        c++;
    }
    while (d <= y_lenght(buf) - 1) {
        write(1, tab[d], 2);
        my_putchar('\n');
        d++;
    }
    exit (0);
}
