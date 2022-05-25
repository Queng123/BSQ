/*
** EPITECH PROJECT, 2021
** find prime
** File description:
** find prime
*/

int my_is_prime(int);

int my_find_prime_sup(int nb)
{
    if (my_is_prime(nb) == 1 || nb == 0 || nb == 1)
        return (nb);
    for (int i = nb; i >= nb; i++) {
        if (my_is_prime(i) == 1)
            return (i);
    }
}
