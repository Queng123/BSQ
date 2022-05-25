/*
** EPITECH PROJECT, 2021
** B-CPE-110-NAN-1-1-BSQ-quentin.brejoin
** File description:
** tab_char_to_int
*/

#include <stdlib.h>
#include "my.h"
#include "bsq.h"

int small(int left, int top, int corner)
{
    int res = left;

    if (res > top) {
        res = top;
    } else if (res > corner) {
        res = corner;
    }
    res = res + 1;
    return (res);
}

int line(int **res, int **tab, int i, int j)
{
    if (i == 0 || j == 0) {
        res[i][j] = tab[i][j];
    } else {
        res[i][j] = small(res[i][j - 1], res[i - 1][j], res[i - 1][j - 1]);
    }
    return (res[i][j]);
}

int final_tab(int **tab, int **res, int i, int j)
{
    if (tab[i][j] == 0) {
        return (0);
    } else if (tab[i][j] > 0) {
        return (line(res, tab, i, j));
    }
    return (0);
}

int **tab_char_to_int(char **str, int nb_rows, int nb_cols)
{
    int **tab = my_tab(str, nb_rows, nb_cols);
    int **res = mem_alloc_2d_arr(nb_rows, nb_cols);

    for (int i = 0; i != nb_rows; i++) {
        for (int j = 0; j != nb_cols; j++)
            res[i][j] = final_tab(tab, res, i ,j);
    }
    free(tab);
    return (res);
}
