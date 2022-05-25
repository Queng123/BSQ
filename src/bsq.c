/*
** EPITECH PROJECT, 2021
** B-CPE-110-NAN-1-1-BSQ-quentin.brejoin
** File description:
** bsq
*/

#include "my.h"
#include "bsq.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void bsq(char *filepath)
{
    int width = get_width(filepath);
    int length = fs_get_number_from_first_line(filepath);
    char **str = load_2d_arr_from_file(filepath, length, width);
    int **tab = tab_char_to_int(str, length, width);
    coord *next_co = malloc(sizeof(next_co));

    find_biggest_square(tab,  width, length, next_co);
    free(tab);
    str = is_square_of_size(str, next_co->y, next_co->x, next_co->size);
    for (int u = 0; u != length; u++) {
        write(1, str[u], width);
        my_putchar('\n');
    }
}
