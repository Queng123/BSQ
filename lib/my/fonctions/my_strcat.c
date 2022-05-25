/*
** EPITECH PROJECT, 2021
** kjebfz
** File description:
** zmkhreozer
*/

int my_strlen(char *);

char *my_strcat(char *dest , char const *src)
{
    int i = 0;
    int size = my_strlen(dest);

    for (i; src[i] != '\0'; i++) {
        dest[size + i] = src[i];
    }
    dest[size + i] = '\0';
    return (dest);
}
