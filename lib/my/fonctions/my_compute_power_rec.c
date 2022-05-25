/*
** EPITECH PROJECT, 2021
** rev power
** File description:
** rev power
*/

int my_compute_power_rec(int nb, int p)
{
    int numb;
    int i = p;

    if (i < 0) {
        return (0);
    }
    if (i == 0) {
        return (1);
    }
    numb = (nb * my_compute_power_rec(nb, p - 1));
    return (numb);
}
