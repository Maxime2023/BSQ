/*
** EPITECH PROJECT, 2018
** line
** File description:
** line
*/

#include "../include/header.h"

int    line(char *buf)
{
    int a = 0;
    char *line = malloc(sizeof(char) * x_lenght(buf) + 1);

    while (buf[a + start(buf)] != '\n') {
        line[a] = buf[a + start(buf)];
        a++;
        }
    line[a] = '\0';
    a = 0;
    while (line[a] != '\0') {
        if (line[a] == '.') {
            line[a] = 'x';
            break;
        }
        a++;
    }
    write (1, line, x_lenght(buf) + 1);
    my_putchar('\n');
    exit (0);
}
