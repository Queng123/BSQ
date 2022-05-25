/*
** EPITECH PROJECT, 2021
** strncat
** File description:
** strncat
*/

int my_strlen(char *);

char *my_strncat(char *dest , char const *src , int nb)
{
    int size = my_strlen(dest);

    for (int i = 0; i < nb && src[i] != '\0'; i++) {
        dest[size + i] = src[i];
    }
    return (dest);
}
