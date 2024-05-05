/*
** EPITECH PROJECT, 2022
** ra_rb_rr.c
** File description:
** ra_rb_rr
** https://www.youtube.com/watch?v=wmS4Tesgkx0
*/

#include "my.h"

elem_t *act_ra(elem_t *l_a)
{
    int mem = l_a->data;
    l_a = supp_elem_front(l_a);
    add_elem_back(l_a, mem);
    return l_a;
}

// running out of ideas for comments
// kifogytak a kommentötletek
// se acabaron las ideas para comentarios
// les idées de commentaires sont épuisées
// die Ideen für Kommentare sind erschöpft
// идеи для комментариев исчерпаны
// les idees de comentaris s'han esgotat
// le idee per i commenti sono esaurite
// コメントのアイデアが尽きました
// 댓글 아이디어가 바닥났어요
// 评论的想法用完了

elem_t *act_rb(elem_t *l_b)
{
    int mem = l_b->data;
    l_b = supp_elem_front(l_b);
    add_elem_back(l_b, mem);
    return l_b;
}

elem_t *act_rr(lists_t *lists)
{
    act_ra(lists->l_a);
    act_rb(lists->l_b);
}
