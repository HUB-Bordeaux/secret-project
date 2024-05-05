/*
** EPITECH PROJECT, 2022
** init_list.c
** File description:
** init_list
** https://www.youtube.com/watch?v=JU9TouRnO84
*/

#include "my.h"
#include <stdlib.h>

elem_t *add_elem_front(elem_t *node, int value)
{
    elem_t *front_node = create_list(value);
    front_node->next = node;
    return front_node;
}

elem_t *add_elem_back(elem_t *node, int value)
{
    elem_t *tmp = node;
    while (node->next != NULL) {
        node = node->next;
    }
    node->next = create_list(value);
    return tmp;
}

/**
 ⣿⣿⣿⣿⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠛⠻⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣦⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣄⡀⠀⢻⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣇⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⣿⠃⢰⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⡆⠀⠀⠀⠀⠀⠀⢶⣶⣶⣾⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣧⠀⢠⡀⠐⠀⠀⠀⠻⢿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⡄⢸⣷⡄⠀⠣⣄⡀⠀⠉⠛⢿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⠀⣿⣿⣦⠀⠹⣿⣷⣶⣦⣼⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣼⣿⣿⣿⣷⣄⣸⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⡿⢛⡙⢻⠛⣉⢻⣉⢈⣹⣿⣿⠟⣉⢻⡏⢛⠙⣉⢻⣿⣿⣿
⣿⣿⣇⠻⠃⣾⠸⠟⣸⣿⠈⣿⣿⣿⡀⠴⠞⡇⣾⡄⣿⠘⣿⣿⣿
⣿⣿⣟⠛⣃⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
 */

elem_t *supp_elem_front(elem_t *node)
{
    elem_t *tmp = node->next;
    free(node);
    node = NULL;
    return tmp;
}

elem_t *supp_elem_back(elem_t *node)
{
    elem_t *tmp = node;
    while (node->next->next != NULL) {
        node = node->next;
    }
    free(node->next);
    node->next = NULL;
    return tmp;
}

int count_elem(elem_t *node)
{
    int count = 0;
    while (node != NULL) {
        count += 1;
        node = node->next;
    }
    return count;
}

/*4qKA4qOg4qO+4qO/4qO/4qO/4qO/4qO/4qO/4qO/4qO/4qO/4qO/4qO/4qO/4qO/4qO/4qO/4qO/4qO/4qO/4qO/4qCA4qCA4qCA4qCA4qOg4qOk4qO24qO2DQrio7/io7/io7/io7/io7/io7/io7/io7/io7/io7/io7/io7/io7/io7/io7/io7/io7/io7/io7/io7/io7/io7/ioIDioIDioIDiorDio7/io7/io7/io78NCuKjv+Kjv+Kjv+Kjv+Kjv+Kjv+Kjv+Kjv+Kjv+Kjv+Kjv+Kjv+Kjv+Kjv+Kjv+Kjv+Kjv+Kjv+Kjv+Kjv+Kjv+Kjv+Kjp+KjgOKjgOKjvuKjv+Kjv+Kjv+Kjvw0K4qO/4qO/4qO/4qO/4qO/4qGP4qCJ4qCb4qK/4qO/4qO/4qO/4qO/4qO/4qO/4qO/4qO/4qO/4qO/4qO/4qO/4qO/4qO/4qO/4qO/4qO/4qO/4qO/4qG/4qO/DQrio7/io7/io7/io7/io7/io7/ioIDioIDioIDioIjioJvior/io7/io7/io7/io7/io7/io7/io7/io7/io7/io7/io7/io7/ioL/ioJvioInioIHioIDio78NCuKjv+Kjv+Kjv+Kjv+Kjv+Kjv+Kjp+KhgOKggOKggOKggOKggOKgmeKgv+Kgv+Kgv+Kgu+Kgv+Kgv+Kgn+Kgv+Kgm+KgieKggOKggOKggOKggOKggOKjuOKjvw0K4qO/4qO/4qO/4qO/4qO/4qO/4qO/4qO34qOE4qCA4qGA4qCA4qCA4qCA4qCA4qCA4qCA4qCA4qCA4qCA4qCA4qCA4qCA4qCA4qCA4qCA4qKA4qO04qO/4qO/DQrio7/io7/io7/io7/io7/io7/io7/io7/io7/ioI/ioIDioIDioIDioIDioIDioIDioIDioIDioIDioIDioIDioIDioIDioIDioKDio7Tio7/io7/io7/io78NCuKjv+Kjv+Kjv+Kjv+Kjv+Kjv+Kjv+Kjv+Khn+KggOKggOKisOKjueKhhuKggOKggOKggOKggOKggOKggOKjreKjt+KggOKggOKggOKguOKjv+Kjv+Kjv+Kjvw0K4qO/4qO/4qO/4qO/4qO/4qO/4qO/4qO/4qCD4qCA4qCA4qCI4qCJ4qCA4qCA4qCk4qCE4qCA4qCA4qCA4qCJ4qCB4qCA4qCA4qCA4qCA4qK/4qO/4qO/4qO/DQrio7/io7/io7/io7/io7/io7/io7/io7/ior7io7/io7fioIDioIDioIDioIDioaDioKTiooTioIDioIDioIDioKDio7/io7/io7fioIDiorjio7/io7/io78NCuKjv+Kjv+Kjv+Kjv+Kjv+Kjv+Kjv+Kjv+KhgOKgieKggOKggOKggOKggOKggOKihOKggOKigOKggOKggOKggOKggOKgieKgieKggeKggOKggOKjv+Kjv+Kjvw0K4qO/4qO/4qO/4qO/4qO/4qO/4qO/4qO/4qOn4qCA4qCA4qCA4qCA4qCA4qCA4qCA4qCI4qCA4qCA4qCA4qCA4qCA4qCA4qCA4qCA4qCA4qCA4qK54qO/4qO/DQrio7/io7/io7/io7/io7/io7/io7/io7/io7/ioIPioIDioIDioIDioIDioIDioIDioIDioIDioIDioIDioIDioIDioIDioIDioIDioIDioIDiorjio7/io78=*/
