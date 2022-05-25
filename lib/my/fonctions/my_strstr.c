/*
** EPITECH PROJECT, 2021
** my_strstr.c
** File description:
** str str  => found a word in a sentence
*/

#include <stddef.h>

char *my_strstr(char *str , char const *to_find)
{
    int j = 0;
    char *result = 0;

    if (to_find[0] == '\0')
        return (str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == to_find[j]) {
            j++;
        } else {
            j = 0;
        }
        if (to_find[j] == '\0')
            return (&str[j - 1]);
    }
    return (0);
}
