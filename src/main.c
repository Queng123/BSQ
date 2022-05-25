/*
** EPITECH PROJECT, 2021
** B-CPE-110-NAN-1-1-BSQ-quentin.brejoin
** File description:
** main
*/

#include <sys/types.h>
#include <sys/stat.h>
#include "my.h"
#include "bsq.h"
#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
    struct stat st;

    if (ac != 2) {
        write(2, "no filepath found", 16);
        return (84);
    }
    stat(av[1], &st);
    if (st.st_size == 0)
        return (84);
    if (error_handling(av[1]) == 0) {
        bsq(av[1]);
        return (0);
    } else {
        my_putstr("error");
        return (84);
    }
}
