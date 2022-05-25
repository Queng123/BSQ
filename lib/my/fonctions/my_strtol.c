/*
** EPITECH PROJECT, 2021
** B-CPE-101-NAN-1-1-evalexpr-paul-antoine.salmon
** File description:
** my_strtol.c
*/

char *my_detect_sign(char *str, int *sign);

long my_strtol(char **str_ptr)
{
    int i = 0;
    int c = 0;
    long d = 0;

    for (; str_ptr[0][i] < '0' || str_ptr[0][i] > '9'; i++)
        if (str_ptr[0][i] == '-')
            c++;
    for (; str_ptr[0][i] >= '0' && str_ptr[0][i] <= '9'; i++) {
        d = d * 10;
        d = d + (str_ptr[0][i] - 48);
    }
    if (c % 2 == 1)
        d = d * -1;
    str_ptr[0] = &str_ptr[0][i];
    return (d);
}
