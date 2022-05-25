/*
** EPITECH PROJECT, 2021
** my_isneg
** File description:
** + ou - ?
*/

int my_putchar(char);

int my_isneg(int number)
{
    if (number >= 0) {
        my_putchar('P');
    } else {
        my_putchar('N');
    }
    return (0);
}
