/*
** EPITECH PROJECT, 2021
** strlen
** File description:
** taille phrase
*/

int my_put_nbr(int);

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
