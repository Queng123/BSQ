/*
** EPITECH PROJECT, 2021
** B-CPE-110-NAN-1-1-BSQ-quentin.brejoin
** File description:
** error_handling
*/

#include "bsq.h"
#include "my.h"
#include <stdlib.h>
#include <unistd.h>

int error_handling(char *filepath)
{
    int index = fs_open_file(filepath);
    int buffer_size = my_buff(filepath);
    char *buf = malloc(sizeof(buf) * my_buff(filepath) + 1);
    int first_num = fs_get_number_from_first_line(filepath);
    int line = 0;
    int i = 0;

    if (first_num == -1)
        return (84);
    read(index, buf, buffer_size);
    for (i = 0; i != '\n'; i++);
    i++;
    for (; buf[i] != '\0'; i++) {
        if (buf[i] == '\n')
            line++;
        if (buf[i] != 'o' && buf[i] != '.' && buf[i] != '\n' && buf[i] != '\0')
            return (84);
    }
    return (0);
}
