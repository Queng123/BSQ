/*
** EPITECH PROJECT, 2021
** B-PSU-100-NAN-1-1-myprintf-quentin.brejoin
** File description:
** my_put_bigstr
*/

#include <stdarg.h>
#include "../include/my.h"
#include <stdlib.h>

void my_printoctalmodified(char res)
{
    int tmp = res;
    char *str = malloc(sizeof(str) * 4);
    int i = 0;

    for (int i = 0; i != 3; i++)
        str[i] = '0';
    while (tmp != 0) {
        str[i] =tmp % 8 + 48;
        tmp = tmp/8;
        i++;
    }
    my_putchar('\\');
    my_putstr(my_revstr(str));
}

void my_put_bigstr(va_list ap)
{
    char *str = va_arg(ap, char*);
    int tmp;
    int i = 0;


    for (; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] == 127) {
            my_printoctalmodified(str[i]);
        } else {
            my_putchar(str[i]);
        }
    }
}
