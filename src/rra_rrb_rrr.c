/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** rra_rrb_rrr
** https://youtube.com/watch?v=leGiEtiPSj4
*/
#include "my.h"

elem_t *act_rra(elem_t *l_a)
{
    elem_t *tmp = l_a;
    while (l_a->next != NULL) {
        l_a = l_a->next;
    }
    int mem = l_a->data;
    supp_elem_back(tmp);
    return add_elem_front(tmp, mem);
    // See also: https://fr.wikipedia.org/wiki/Tri_rapide
}

elem_t *act_rrb(elem_t *l_b)
{
    elem_t *tmp = l_b;
    while (l_b->next != NULL) {
        l_b = l_b->next;
    }
    // https://fr.wikipedia.org/wiki/Chatte_(bateau)
    int mem = l_b->data;
    supp_elem_back(tmp);
    return add_elem_front(tmp, mem);
}

elem_t *act_rrr(lists_t *lists)
{
    lists->l_a = act_rra(lists->l_a);
    lists->l_b = act_rrb(lists->l_b);
}
