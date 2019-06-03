/*
** EPITECH PROJECT, 2018
** smallest
** File description:
** smallest
*/

int    smb(int a, int b, int c)
{
    int d = 0;

    while (d != a && d != b && d != c)
        d++;
    d = d + 1;
    return (d);
}
