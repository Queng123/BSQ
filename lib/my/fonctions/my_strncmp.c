/*
** EPITECH PROJECT, 2021
** str cmp with n
** File description:
** str n cmp
*/

int my_strncmp(char const *s1 , char const *s2, int n)
{
    for (int i = 0; i != n; i++) {
        if (s1[i] - s2[i] < 0)
            return (-1);
        if (s1[i] - s2[i] > 0)
            return (1);
    }
    return (0);
}
