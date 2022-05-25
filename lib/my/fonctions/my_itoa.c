/*
** EPITECH PROJECT, 2021
** B-CPE-101-NAN-1-1-evalexpr-paul-antoine.salmon
** File description:
** my_itoa
*/

#include <stdlib.h>

int my_mall(int num)
{
    int i = 0;
    int temp = 1;

    if (num < 0)
        num = num * -1;
    while (num / temp > 0) {
        temp = temp * 10;
        i++;
    }
    return (i);
}

char *my_itoa(int nb)
{
    long i = 0;
    long temp = 1;
    long res = 0;
    char *result;

    i = my_mall(nb);
    result = malloc(sizeof(char) * (i));
    i = 0;
    if (nb < 0) {
        result[i] = '-';
        nb = nb * -1;
        i++;
    }
    for (; nb / temp > 0; temp = temp * 10);
    temp = temp / 10;
    for (; temp >= 1;result[i] = (res % 10) + 48, i++, temp = temp / 10)
        res = nb / temp;
    result[i] = '\0';
    return (result);
}
