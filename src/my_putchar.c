/*
** EPITECH PROJECT, 2022
** my_putchar
** File description:
** print char
** https://www.youtube.com/watch?v=U3aXWizDbQ4
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1); // back to the basics D01EX0
}
