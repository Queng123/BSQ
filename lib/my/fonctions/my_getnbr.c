/*
** EPITECH PROJECT, 2021
** evil str
** File description:
** evil str
*/

#include <unistd.h>

int my_getnbr(char const *str)
{
    int i = 0;
    int c = 0;
    long d = 0;

    for (i; str[i] < '0' || str[i] > '9'; i++) {
        if (str[i] == '-') {
            c++;
        }
    }
    for (i; str[i] >= '0' && str[i] <= '9'; i++) {
        d = d * 10;
        d = d + (str[i] - 48);
    }
    if (c % 2 == 1) {
        d = d * -1;
    }
    if ((d < -2147483648) || (d > 2147483647))
        return (0);
    return (d);
}
