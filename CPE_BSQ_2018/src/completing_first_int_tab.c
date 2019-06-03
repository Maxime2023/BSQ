/*
** EPITECH PROJECT, 2018
** completing
** File description:
** completing
*/

#include "../include/header.h"

int    *completing_first_int_tab(char *buf)
{
    int **z = malloc(sizeof(int *) * (y_lenght(buf) + 4));
    int *tab = malloc(sizeof(int) * 3);
    int x = 0;
    int y = 0;

    for (int a = 0; a <= y_lenght(buf); a++)
        z[a] = malloc(sizeof(int *) * (x_lenght(buf) + 4));
    for (int d = start(buf); buf[d] != '\0'; d++) {
        if (buf[d] == '\n') {
            y++;
            x = 0;
            d++;
        }
        if (buf[d] == '.') {
            z[y][x] = 1;
            if (x > 0 && y > 0) {
                if (z[y][x - 1] == 0 ||
                    z[y - 1][x] == 0 || z[y - 1][x - 1] == 0)
                    z[y][x] = 1;
                else if (z[y][x - 1] > 0 ||
                         z[y - 1][x] > 0 || z[y - 1][x - 1] > 0) {
                    z[y][x] = smb(z[y - 1][x], z[y][x - 1], z[y - 1][x - 1]);
                    if (z[y][x] > tab[0]) {
                        tab[0] = z[y][x];
                        tab[1] = x;
                        tab[2] = y;
                    }
                }
            }
        }
        if (buf[d] == 'o')
            z[y][x] = 0;
        x++;
    }
    tab[0] = tab[0] - 1;
    tab[1] = tab[1] - tab[0];
    tab[2] = tab[2] - tab[0];
    return (tab);
}
