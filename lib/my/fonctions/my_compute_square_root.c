/*
** EPITECH PROJECT, 2021
** square root
** File description:
** square
*/

int my_compute_square_root(int nb)
{
    int u = 1;

    while (u * u != nb) {
        u++;
        if (u * u > nb) {
            return (0);
        }
    }
    return (u);
}
