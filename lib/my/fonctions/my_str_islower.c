/*
** EPITECH PROJECT, 2021
** str is lower
** File description:
** str is lower
*/

int my_str_islower(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            i++;
        } else {
            return (0);
        }
    }
    return (1);
}
