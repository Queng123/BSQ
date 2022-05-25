/*
** EPITECH PROJECT, 2021
** B-CPE-110-NAN-1-1-BSQ-quentin.brejoin
** File description:
** get_width
*/

#include <fcntl.h>
#include <unistd.h>
#include "my.h"
#include "bsq.h"
#include <stdlib.h>

int get_width(char const *filepath)
{
    int j = open(filepath, O_RDONLY);
    int i = 0;
    int k = 0;
    char *buf = malloc(sizeof(buf) * my_buff(filepath) + 1);
    int x = my_buff(filepath);

    read(j, buf, x);
    for (; buf[i] != '\n'; i++);
    k = i;
    k++;
    for (; buf[k] != '\n'; k++);
    close(j);
    free(buf);
    return (k - i - 1);
}
