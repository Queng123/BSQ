/*
** EPITECH PROJECT, 2021
** put nbr
** File description:
** afficher n'importe quel nombre
*/

void my_putchar(char);

int my_put_nbr(long nb)
{
    long variable = 1;
    long numb = nb;

    if (numb == 0) {
        my_putchar('0');
    }
    if (numb < 0) {
        my_putchar('-');
        numb = -numb;
    }
    while (numb / variable != 0) {
        variable = variable * 10;
    }
    while (variable != 1) {
        numb = numb - numb / variable * variable;
        variable = variable / 10;
        my_putchar(numb / variable + 48);
    }
}
