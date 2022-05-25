/*
** EPITECH PROJECT, 2021
** my_str_isprintable(
** File description:
** my_str_isprintable(
*/

int my_putchar(char);

int my_str_isprintable(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] <= 'Z'))
            i++;
        else
            return (0);
    }
    return (1);
}
