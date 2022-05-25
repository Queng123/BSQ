/*
** EPITECH PROJECT, 2021
** my_strncpy.c
** File description:
** copy n caracter from a string to an other one
*/

char *my_strncpy(char *dest , char const *src , int n)
{
    int i = 0;

    for (i; i < n; i++) {
        dest[i] = src[i];
    }
    return (dest);
}
