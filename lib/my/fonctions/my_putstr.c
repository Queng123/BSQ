/*
** EPITECH PROJECT, 2021
** putstr
** File description:
** putstr
*/

#include <unistd.h>

int my_strlen(char *);

int my_putstr(char *str)
{
    write(1, str, my_strlen(str));
    return (0);
}
