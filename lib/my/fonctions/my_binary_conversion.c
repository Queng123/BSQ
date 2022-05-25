/*
** EPITECH PROJECT, 2021
** B-PSU-100-NAN-1-1-myprintf-quentin.brejoin
** File description:
** my_char_conversion
*/

#include <stdarg.h>
#include <stdio.h>
#include "../include/my.h"

void my_binary_conversion(va_list ap)
{
    signed long tmp = va_arg(ap, long);
    char *str = my_itoa(tmp);
    int i = 1;

    for (; tmp != 0; i++) {
        str[i] = tmp % 2 + 48;
        tmp = tmp/2;
    }
    str = my_revstr(str);
    str[i - 1] = '\0';
    my_putstr(str);
}
