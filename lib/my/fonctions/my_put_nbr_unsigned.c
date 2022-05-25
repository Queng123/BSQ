/*
** EPITECH PROJECT, 2021
** B-PSU-100-NAN-1-1-myprintf-quentin.brejoin
** File description:
** my_put_nbr_unsigned
*/

#include <stdarg.h>
#include <stdio.h>
#include "../include/my.h"

int my_putlongnbr(unsigned long nb)
{
    long variable = 1;
    long numb = nb;

    if (numb == 0) {
        my_putchar('0');
    }
    while (numb / variable != 0) {
        variable = variable * 10;
    }
    while (variable != 1) {
        numb = numb - numb / variable * variable;
        variable = variable / 10;
        my_putchar(numb / variable + 48);
    }
}

void my_put_nbr_unsigned(va_list ap)
{
    unsigned long a = va_arg(ap, unsigned long);

    my_putlongnbr(a);
}
