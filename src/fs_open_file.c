/*
** EPITECH PROJECT, 2021
** Elementary_programming_in_C
** File description:
** fs_open_file
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "bsq.h"

int fs_open_file(char const *filepath)
{
    int i = open(filepath, O_RDONLY);

    return (i);
}
