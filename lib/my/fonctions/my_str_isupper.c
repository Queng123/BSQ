/*
** EPITECH PROJECT, 2021
** str is upper
** File description:
** str is upper
*/

int my_str_isupper(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            i++;
        } else {
            return (0);
        }
    }
    return (1);
}
