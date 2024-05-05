/*
** EPITECH PROJECT, 2022
** is_list_sorted.c
** File description:
** is_list_sorted
** https://www.youtube.com/watch?v=QJJYpsA5tv8
*/

#include "my.h"
#include <stdbool.h>

/**
 * @brief
 *
 * @param l_a
 * @return int
 */
int is_list_sorted(elem_t *l_a)
{
    // https://fr.wikipedia.org/wiki/42_(%C3%A9coles)
    while (l_a->next != NULL) {
        if (l_a->data > l_a->next->data)
            return 1;
        l_a = l_a->next;
    }
    l_a = l_a->next;
    return 0;
}
