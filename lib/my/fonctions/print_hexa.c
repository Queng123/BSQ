/*
** EPITECH PROJECT, 2021
** B-PSU-100-NAN-1-1-myprintf-quentin.brejoin
** File description:
** print_hexa
*/

#include <stdarg.h>
#include <stdio.h>
#include "../include/my.h"

char my_nbr_to_char(char c)
{
    while (c > 9 + 48) {
        c = c - 10;
    }
    return (c);
}

void my_printhexa(va_list ap)
{
    unsigned long tmp = va_arg(ap, long);
    char *str = my_itoa(tmp);
    int i = 1;

    for (; tmp != 0; i++) {
        str[i] = tmp % 16 + 48;
        if (str[i] > 9 + 48) {
            str[i] = my_nbr_to_char(str[i]);
            str[i] = str[i] + 49;
        }
        tmp = tmp/16;
    }
    str = my_revstr(str);
    str[i - 1] = '\0';
    my_putstr(str);
}

void my_printbighexa(va_list ap)
{
    unsigned long tmp = va_arg(ap, long);
    char *str = my_itoa(tmp);
    int i = 1;

    for (; tmp != 0; i++) {
        str[i] = tmp % 16 + 48;
        if (str[i] > 9 + 48) {
            str[i] = my_nbr_to_char(str[i]);
            str[i] = str[i] + 17;
        }
        tmp = tmp/16;
    }
    str = my_revstr(str);
    str[i - 1] = '\0';
    my_putstr(str);
}
