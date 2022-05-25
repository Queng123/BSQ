/*
** EPITECH PROJECT, 2021
** is prime
** File description:
** my_is_prime
*/

int my_is_prime(int nb)
{
    int u = 1;
    int x = 0;
    int i = 0;

    if (nb <= 0)
        return (0);
    while (u <= nb) {
        x = nb % u;
        if (x == 0) {
            i++;
        }
        u++;
    }
    if (i > 2 || i == 1) {
        return (0);
    }
    return (1);
}
