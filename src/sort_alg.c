/*
** EPITECH PROJECT, 2022
** sort_alg.c
** File description:
** sort_alg
** https://www.youtube.com/watch?v=13pgxOCHKh0
*/

// Something is not quite right...

#include "my.h"

void first_half(lists_t *lists, int min_place)
{
    for (int i = 0; i < min_place; i++){
        lists->l_a = act_ra(lists->l_a);
        write(1, "ra ", 3);
    }
    lists = act_pb(lists);
    write(1, "pb ", 3);
}

void second_half(lists_t *lists, int min_place)
{
    for (int i = 0; i < (count_elem(lists->l_a) - min_place); i++){
        lists->l_a = act_rra(lists->l_a);
        write(1, "rra ", 4);
    }
    lists = act_pb(lists);
    write(1, "pb ", 3);
}

// I think we should implement this instead; (May be O(n))
// https://fr.wikipedia.org/wiki/Tri_stupide

void sort_alg(lists_t *lists)
{
    int min_place = 0;
    int count = count_elem(lists->l_a);
    for (int i = 0; i < count; i++) {
        min_place = find_min(lists);
        if (min_place < count / 2) {
            first_half(lists, min_place);
        } else {
            second_half(lists, min_place);
        }
    }
    for (int i = 0; i < count - 1; i++) {
        lists = act_pa(lists);
        write(1, "pa ", 3);
    }
    lists = act_pa(lists);
    write(1, "pa ", 2);
}

