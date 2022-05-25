/*
** EPITECH PROJECT, 2021
** my_revstr.C
** File description:
** reverse string
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int tot = my_strlen(str) - 1;
    char temp;
    int i = 0;

    while (i < tot) {
        temp = str[i];
        str[i] = str[tot];
        str[tot] = temp;
        tot--;
        i++;
    }
    return (str);
}
