/*
** EPITECH PROJECT, 2021
** B-PSU-100-NAN-1-1-myprintf-quentin.brejoin
** File description:
** my_print_adress
*/

#include <stdarg.h>
#include <stdio.h>
#include "../include/my.h"

void my_print_adress(va_list ap)
{
    unsigned long tmp = (unsigned long)va_arg(ap, void *);
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
    if (str != "\0") {
        my_putstr("0x");
        my_putstr(str);
    }
}
