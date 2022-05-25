/*
** EPITECH PROJECT, 2021
** B-CPE-110-NAN-1-1-BSQ-quentin.brejoin
** File description:
** find_biggest_square
*/

#include "bsq.h"
#include <stdlib.h>
#include <unistd.h>
#include "my.h"

void my_size(int **map, square *square)
{
    if (square->size < map[square->temp_y][square->temp_x]) {
        square->size = map[square->temp_y][square->temp_x];
        square->y = square->temp_y;
        square->x = square->temp_x;
    }
}

void find_biggest_square(int **map, int row, int col, coord *next_coord)
{
    square *square = malloc(sizeof(square));

    square->size = 0;
    for (square->temp_y = 0; square->temp_y != col; square->temp_y++) {
        for (square->temp_x = 0; square->temp_x != row; square->temp_x++) {
            my_size(map, square);
        }
    }
    square->x = square->x - square->size + 1;
    square->y = square->y - square->size + 1;
    next_coord->x = square->x;
    next_coord->y = square->y;
    next_coord->size = square->size;
}
