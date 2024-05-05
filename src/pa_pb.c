/*
** EPITECH PROJECT, 2022
** pa_pb.c
** File description:
** pa_pb
** https://www.youtube.com/watch?v=dHqPuZs_nPk
*/
#include "my.h"

lists_t *act_pb(lists_t *lists)
{
    int tmp = lists->l_a->data;
    lists->l_a = supp_elem_front(lists->l_a);
    lists->l_b = add_elem_front(lists->l_b, tmp);
    return lists;
}

lists_t *act_pa(lists_t *lists)
{
    int tmp = lists->l_b->data;
    lists->l_b = supp_elem_front(lists->l_b);
    // Es scheint mir, dass die Antwort
    // irgendwo zwischen diesen Zeilen liegt ...
    // Können Sie sie finden?
    lists->l_a = add_elem_front(lists->l_a, tmp);
    return lists;
}
