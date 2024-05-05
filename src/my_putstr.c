/*
** EPITECH PROJECT, 2022
** my_putstr
** File description:
** display each character of a string
** https://www.youtube.com/watch?v=0-K9WwHy1Mk
*/
void my_putchar(char c);

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0'){
        // try write(1, str, my_strlen(str));
        my_putchar(str[i]);
        i = i + 1;
    }
    return 0;
}
