/*
** EPITECH PROJECT, 2018
** x_lenght
** File description:
** x_lenght
*/

int    x_lenght(char *buf)
{
    int x = 0;
    int p = 0;
    int s = 0;

    while (buf[x] != '\n')
        x++;
    x = x + 1;
    p = x;
    while (buf[p] != '\n' && buf[p] != '\0') {
        s++;
        p++;
    }
    s = s - 1;
    return (s);
}
