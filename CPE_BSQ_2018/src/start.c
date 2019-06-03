/*
** EPITECH PROJECT, 2018
** start
** File description:
** start
*/

int    start(char *buf)
{
    int a = 0;

    while (buf[a] != '\n') {
        a++;
    }
    a++;
    return (a);
}
