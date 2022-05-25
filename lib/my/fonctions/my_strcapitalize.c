/*
** EPITECH PROJECT, 2021
** my_strcapitalize
** File description:
** str capitalize
*/

int my_checker(char *str, int i)
{
    if (str[i - 1] >= '0' && str[i - 1] <= '9' || \
        str[i - 1] >= 'A' && str[i - 1] <= 'Z' || \
        str[i - 1] >= 'a' && str[i - 1] <= 'z') {
        return (str[i]);
    } else {
        return (str[i] = str[i] - 32);
    }
}

char *my_strcapitalize(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[0] >= 'a' && str[0] <= 'z')
            str[0] = str[0] - 32;
        if (str[i] >= 'a' && str[i] <= 'z') {
            my_checker(str, i);
        }
    }
    return (str);
}
