/*
** EPITECH PROJECT, 2021
** my_strdup.c
** File description:
** str dup
*/

#include <stdlib.h>

int my_strlen(char const *);

char *my_strcpy(char *, char const *);

char *my_strdup(char const *src)
{
    char *dest = malloc (sizeof(char) * (my_strlen(src) + 1));

    my_strcpy(dest, src);
    return (dest);
}
