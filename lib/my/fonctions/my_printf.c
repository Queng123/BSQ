/*
** EPITECH PROJECT, 2021
** B-PSU-100-NAN-1-1-bsmyprintf-quentin.brejoin
** File description:
** bootstrap_printf
*/

#include <stdarg.h>
#include <stdio.h>
#include "../include/my.h"

int check_args(char c, va_list ap, int j)
{
    char arg_list[] = "idcsouxXbpS";
    void (*p[12])(va_list ap) = {my_put_nbrf, my_put_nbrf, my_putcharf, \
        my_putstrf, my_printoctal, my_put_nbr_unsigned, my_printhexa, \
        my_printbighexa, my_binary_conversion, my_print_adress, my_put_bigstr};

    for (int i = 0; arg_list[i] != '\0'; i++) {
        if (c == arg_list[i]) {
            (*p[i])(ap);
            return (j + 1);
        }
    }
    my_putchar('%');
    my_putchar(c);
    return (j + 1);
}

int my_check_hashtag(int i, va_list ap, char c)
{
    if (c == 'o') {
        my_putchar('0');
        i = check_args(c, ap, i);
        return (i + 1);
    } else if (c == 'x' || c == 'X') {
        my_putstr("0x");
        i = check_args(c, ap, i);
        return (i + 1);
    } else {
        i = check_args(c, ap, i);
        return (i + 1);
    }
}

void my_printf(char *str, ...)
{
    va_list ap;

    va_start(ap, str);
    for (int i = 0; str[i] != '\0'; i++) {
        (str[i] != '%') ? my_putchar(str[i]) : 0;
        if (str[i] == '%' && str[i + 1] == '%') {
            i = my_putchar_mod(ap, i);
            continue;
        }
        (str[i] == '%' && str[i + 1] == '\0') ? i = i + 3 : 0;
        while (str[i] == '%' && str[i + 1] == '#')
            i = my_check_hashtag(i, ap, str[i + 2]);
        while (str[i] == '%' && str[i + 1] == 'l' && str[i + 2] == 'l')
            i = check_args(str[i + 3], ap, i) + 2;
        while (str[i] == '%' && (str[i + 1] == 'l' || str[i + 1] == 'j' || \
            str[i + 1] == 'q' || str[i + 1] == 'z' || str[i + 1] == 'Z'))
            i = check_args(str[i + 2], ap, i) + 1;
        while (str[i] == '%')
            i = check_args(str[i + 1], ap, i);
    }
    va_end(ap);
}
