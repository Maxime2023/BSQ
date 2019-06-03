/*
** EPITECH PROJECT, 2018
** y_elnght
** File description:
** y_lenght
*/

#include <stdio.h>

int    y_lenght(char *buf)
{
    int z = 0;
    int y = 0;

    while (buf[z] != '\0') {
        if (buf[z] == '\n')
            y++;
        z++;
    }
    y = y - 1;
    return (y);
}
