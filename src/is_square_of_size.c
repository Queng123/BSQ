/*
** EPITECH PROJECT, 2021
** B-CPE-110-NAN-1-1-bsbsq-quentin.brejoin
** File description:
** is_square_of_size
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "bsq.h"
#include "my.h"

char **is_square_of_size(char **map, int row, int col, int square_size)
{
    for (int i = row; i < row + square_size; i++) {
        for (int j = col; j < col + square_size; j++) {
            map[i][j] = 'x';
        }
    }
    return (map);
}
