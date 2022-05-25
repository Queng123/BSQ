/*
** EPITECH PROJECT, 2021
** B-CPE-110-NAN-1-1-BSQ-quentin.brejoin
** File description:
** temporary_tab
*/

#include <stdlib.h>
#include "my.h"
#include "bsq.h"

int **mem_alloc_2d_arr(int nb_rows, int nb_cols)
{
    int **tab = my_calloc(sizeof(tab), (nb_rows + 1));

    for (int i = 0; i != nb_rows + 1; i++) {
        tab[i] = my_calloc(sizeof(int), (nb_cols + 1));
    }
    return (tab);
}

int assignement(int tab)
{
    if (tab == 'o') {
        tab = 0;
    }
    if (tab == '.') {
        tab = 1;
    }
    return (tab);
}

int **my_tab(char **str, int nb_rows, int nb_cols)
{
    int **tab = mem_alloc_2d_arr(nb_rows, nb_cols);

    for (int i = 0; i != nb_rows + 1; i++) {
        for (int j = 0; j != nb_cols + 1; j++) {
            tab[i][j] = str[i][j];
            tab[i][j] = assignement(tab[i][j]);
        }
    }
    return (tab);
}
