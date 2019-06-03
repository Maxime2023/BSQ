/*
** EPITECH PROJECT, 2018
** mal
** File description:
** mal
*/

#include "../include/header.h"
char    **tab_mal(char *buf)
{
    char **tab = malloc(sizeof(char *) * (y_lenght(buf) + 4));
    for (int b = 0; b <= y_lenght(buf); b++)
        tab[b] = malloc(sizeof(char *) * (x_lenght(buf) + 4));
    return (tab);
}
