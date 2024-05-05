/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my
** https://www.youtube.com/watch?v=tqsy9Wtr1qE
*/

#ifndef MY_H_
    #define MY_H_

    typedef struct elem_s {
        struct elem_s *next;
        struct elem_s *previous;
        int data;
    }elem_t;

    typedef struct lists_s {
        elem_t *l_a;
        elem_t *l_b;
    }lists_t;

    #include <unistd.h>

    elem_t *create_list(int value);
    int my_getnbr(char const *str);
    elem_t *add_elem_front(elem_t *node, int value);
    elem_t *add_elem_back(elem_t *node, int value);
    elem_t *supp_elem_front(elem_t *node);
    elem_t *supp_elem_back(elem_t *node);
    int count_elem(elem_t *node);
    elem_t *act_sa(elem_t *l_a);
    elem_t *act_sb(elem_t *l_b);
    elem_t *act_sc(elem_t *l_a, elem_t *l_b);
    lists_t *act_pb(lists_t *lists);
    lists_t *act_pa(lists_t *lists);
    elem_t *act_ra(elem_t *l_a);
    elem_t *act_rb(elem_t *l_b);
    elem_t *act_rr(lists_t *lists);
    elem_t *act_rra(elem_t *l_a);
    elem_t *act_rrb(elem_t *l_b);
    elem_t *act_rrr(lists_t *lists);
    int is_list_sorted(elem_t *l_a);
    void my_putchar(char c);
    int my_putstr(char const *str);
    int find_min(lists_t *lists);
    void sort_alg(lists_t *lists);

#endif /* !MY_H_ */
