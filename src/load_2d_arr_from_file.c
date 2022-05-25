/*
** EPITECH PROJECT, 2021
** B-CPE-110-NAN-1-1-bsbsq-quentin.brejoin
** File description:
** load_2d_arr_from_file
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"
#include "bsq.h"

int my_buff(char const *filepath)
{
    struct stat st;
    int x = 0;

    stat(filepath, &st);
    x = st.st_size;
    return (x);
}

char **load_2d_arr_from_file(char const *filepath , int nb_rows , int nb_cols)
{
    int index = fs_open_file(filepath);
    int buffer_size = my_buff(filepath);
    char *buf = malloc(sizeof(buf) * my_buff(filepath) + 1);
    char **str = mem_alloc_2d_array(nb_rows, nb_cols);
    int x = 0;
    int y = 0;
    int z = 0;

    read(index, buf, buffer_size);
    for (; buf[z] != '\n'; z++);
    for (z = z + 1; x != nb_rows; x++) {
        for (y = 0; y != nb_cols + 1; y++, z++)
            str[x][y] = buf[z];
        str[x][y] = '\0';
    }
    str[x][0] = '\0';
    free(buf);
    close(index);
    return (str);
}
