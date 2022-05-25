/*
** EPITECH PROJECT, 2021
** B-PSU-100-NAN-1-1-myprintf-quentin.brejoin
** File description:
** test_my_printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "my.h"
#include "bsq.h"

void redirect_stdout(void)
{
    cr_redirect_stdout();
}
