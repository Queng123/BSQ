/*
** EPITECH PROJECT, 2021
** B-PSU-100-NAN-1-1-bsmyprintf-quentin.brejoin
** File description:
** bootstrap_printf
*/

#include <stdarg.h>
#include <stdio.h>
#include "../include/my.h"

void my_putcharf(va_list ap)
{
    int tmp = va_arg(ap, int);

    my_putchar(tmp);
}

void my_put_nbrf(va_list ap)
{
    long x = va_arg(ap, long);

    my_put_nbr(x);
}

void my_putstrf(va_list ap)
{
    char *str = va_arg(ap, char *);

    my_putstr(str);
}

void my_printoctal(va_list ap)
{
    unsigned long tmp = va_arg(ap, long);
    char *str = my_itoa(tmp);
    int i = 0;

    while (tmp != 0) {
        str[i] =tmp % 8 + 48;
        tmp = tmp/8;
        i++;
    }
    my_putstr(my_revstr(str));
}

int my_putchar_mod(va_list ap, int j)
{
    my_putchar('%');
    return (j + 1);
}
