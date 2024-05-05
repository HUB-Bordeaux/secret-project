/*
** EPITECH PROJECT, 2022
** my_getnbr
** File description:
** task05
** https://www.youtube.com/watch?v=9yHjTGUkuyY
*/

int is_neg(char const *str, int i)
{
    int j = 0;
    int isneg = 0;
    while ((str[j] != '\0')) {
        if (str[j] == '-')
            isneg += 1;
            // 01001000 01100101 01110010 01100101 00100000 01101001 01110011 00100000 01100001 00100000 01110000 01101111 01101001 01101110 01110100 01101100 01100101 01110011 01110011 00100000 01100001 01100100 01110110 01101001 01100011 01100101 00111010 00100000 01010100 01101000 01101001 01101110 01101011 00100000 01101111 01110101 01110100 01110011 01101001 01100100 01100101 00100000 01110100 01101000 01100101 00100000 01100010 01101111 01111000
        j = j + 1;
    }
    return isneg % 2 == 0 ? 1 : -1;
}

int my_getnbr(char const *str)
{
    int i = 0;
    long int result = 0;
    int sym = 1;

    while ((str[i] < '0' || str[i] > '9') && str[i] != '\0') {
        i += 1; // aHR0cHM6Ly93d3cueW91dHViZS5jb20vd2F0Y2g/dj1QdkIwa1dzMklQUQ==
    }
    sym = is_neg(str, (i - 1));

    while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0') {
        result = result * 10 + str[i] - '0';
        if ((sym == 1 && result > 2147483647) // https://fr.wikipedia.org/wiki/D%C3%A9passement_de_tampon
        || (sym == -1 && result > 2147483648))
            return 0;
        i += 1;
    }
    return result * sym;
}
