/*
** EPITECH PROJECT, 2021
** B-CPE-110-NAN-1-1-bsbsq-quentin.brejoin
** File description:
** fs_get_number_from_first_line
*/

#include "my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int fs_get_number_from_first_line(char const *filepath)
{
    int j = open(filepath, O_RDONLY);
    int i = 0;
    char buf[500];
    int result = 0;
    char *str;

    read(j, buf, 500);
    for (; buf[i] != '\n'; i++);
    buf[i] = '\0';
    str = malloc(sizeof(str) * my_strlen(buf));
    for (i = 0; !(buf[i] >= '0' && buf[i] <= '9'); i++);
    str = &buf[i];
    if (str[0] < '0' || str[0] > '9')
        return (-1);
    for (i = 0; str[i] >= '0' && str[i] <= '9'; i++);
    str[i] = '\0';
    close(j);
    result = my_getnbr(str);
    return (result);
}
