/*
** EPITECH PROJECT, 2021
** undefined
** File description:
** my_memset
*/

#include <stdlib.h>

void *my_memset(void *ptr, int data, int size)
{
    int8_t *byteList = ptr;

    for (int i = 0; i < size; i++)
        byteList[i] = data;
    return (byteList);
}
