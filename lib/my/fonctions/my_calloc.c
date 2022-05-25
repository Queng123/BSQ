/*
** EPITECH PROJECT, 2021
** undefined
** File description:
** my_calloc
*/

#include <stdlib.h>
#include "../include/my.h"

void *my_calloc(int elem_count, int elem_size)
{
    void *ptr = malloc(elem_count * elem_size);

    if (!ptr)
        return (NULL);
    my_memset(ptr, 0, elem_count * elem_size);
    return (ptr);
}
