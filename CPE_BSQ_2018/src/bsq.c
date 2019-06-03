/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** bsq
*/

#include "../include/header.h"

char    **finaltab(char *buf)
{
    char **tab = tab_mal(buf);
    int x = 0;
    int y = 0;

    for (int d = start(buf); buf[d] != '\0'; d++) {
        if (buf[d] == '\n') {
            tab[y][x] = '\0';
            y++;
            x = 0;
            d++;
        }
        if (buf[d] == '.')
            tab[y][x] = '.';
        if (buf[d] == 'o')
            tab[y][x] = 'o';
        x++;
    }
    tab[y][x] = '\0';
    tab[y + 1] = NULL;
    return (tab);
}

char    **writting_x(char *buf)
{
    int *a = completing_first_int_tab(buf);
    int x = 0;
    int y = 0;
    char **b = finaltab(buf);
    int c = 0;
    int d = 0;

    while (a[2] + d <= a[2] + a [0]) {
        c = 0;
        while (a[1] + c <= a[1] + a[0]) {
            b[a[2] + d][a[1] + c] = 'x';
            c++;
        }
        d++;
    }
    for (int t = 0; t <= y_lenght(buf) - 1; t++) {
        write (1, b[t], x_lenght(buf) + 1);
        my_putchar('\n');
        }
}

int    finalprog(char *buf)
{
    if (y_lenght(buf) == 1)
        line(buf);
    if (x_lenght(buf) == 0)
        col(buf);
    if (x_lenght(buf) == 0 && y_lenght(buf) == 0)
        one(buf);
    writting_x(buf);
}

char    *adding_file(char *a)
{
    struct stat sl;
    int fd;
    char *buf;
    int size;

    stat(a, &sl);
    if (sl.st_size == 0)
        exit (84);
    buf = malloc(sizeof(char) * (sl.st_size + 1));
    fd = open(a, O_RDONLY);
    if (fd == -1)
        exit (84);
    size = read (fd, buf, sl.st_size);
    buf[size] = '\0';
    close(fd);
    finalprog(buf);
    free(buf);
    return (buf);
}

int    main(int ac, char *av[])
{
    char *a = adding_file(av[1]);
    return (0);
}
