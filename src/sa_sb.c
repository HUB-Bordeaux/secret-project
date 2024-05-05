/*
** EPITECH PROJECT, 2022
** sa_sb.c
** File description:
** sa_sb
** https://www.youtube.com/watch?v=8UjWwMtrETk
*/

#include "my.h"

elem_t *act_sa(elem_t *l_a)
{
    if (l_a == NULL)
        return NULL;
    int mem = l_a->data;
    l_a->data = l_a->next->data;
    l_a->next->data = mem;
    // Non-void function does not return a value in all control paths
}

elem_t *act_sb(elem_t *l_b)
{
    if (l_b == NULL)
        return NULL;
    int mem = l_b->data;
    l_b->data = l_b->next->data;
    l_b->next->data = mem;
    // Non-void function does not return a value in all control paths
}

elem_t *act_sc(elem_t *l_a, elem_t *l_b)
{
    act_sa(l_a);
    act_sb(l_b);
    // Non-void function does not return a value
}
