/*
** EPITECH PROJECT, 2021
** B-CPE-110-NAN-1-1-BSQ-quentin.brejoin
** File description:
** bsq
*/

#ifndef BSQ_H_
    #define BSQ_H_

typedef struct
{
    int x;
    int y;
    int size;
}coord;

typedef struct
{
    int x;
    int y;
    int temp_x;
    int temp_y;
    int size;
}square;

int fs_open_file(char const *filepath);

void fs_understand_return_of_read(int fd, char *buffer, int size);

int my_buff(char const *filepath);

char **load_2d_arr_from_file(char const *filepath, int nb_rows, int nb_cols);

char **mem_alloc_2d_array(int nb_rows, int nb_cols);

char **is_square_of_size(char **map, int row, int col, int square_size);

void find_biggest_square(int **map, int row, int col, coord *n);

void bsq(char *filepath);

int **tab_char_to_int(char **str, int nb_rows, int nb_cols);

int get_width(char const *filepath);

int fs_get_number_from_first_line(char const *filepath);

int **mem_alloc_2d_arr(int nb_rows, int nb_cols);

int **my_tab(char **str, int nb_rows, int nb_cols);

int error_handling(char *filepath);

#endif /* !BSQ_H_ */
