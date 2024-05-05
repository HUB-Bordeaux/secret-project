/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
** https://www.youtube.com/watch?v=RLGjCClxxOk
*/

#include "my.h"
#include <stdlib.h>

void free_list(lists_t *lists)
{
    // Hey psst: I have a secret for you, Vm0weGQxTnJOVlpOU0dSc1VsWktVMWxzVWxkalJsSllZMGhPYW1KRk5WZFhhMmhyWVRKS1NHVklaRlpXZWxab1dWWmtSMVpzVG5WVGJIQm9ZVE5DTmxkcldtRmtNRFZYVW01V2FsSXllRTlaVjNSaFpXeGtjbFp0ZEdsTmF6VkpWVEkxVTFkck1YUlZiVVpWVmpOQ2VsUlZXbkprTVhCRlZXMXNVMDFWY0VwV2JUQXhWREpLUjFaWVpGUmhhelZoV1ZkMGQyVnNjRWRhUms1VVVqRmFTVnBWWkhkVWF6RkZVVlJWUFE9PQ==
    while (lists->l_a != NULL) {
        elem_t *tmp = lists->l_a->next;
        free(lists->l_a);
        lists->l_a = tmp;
    }
    // 00110011 00110011 00110000 00110110
    while (lists->l_b != NULL) {
        elem_t *tmp = lists->l_b->next;
        free(lists->l_b);
        lists->l_b = tmp;
    }
    free(lists);
}

int main(int ac, char **av)
{
    lists_t *lists = malloc(sizeof(lists_t));
    if (ac == 1) {
        my_putchar('\n');
        return 0;
    }
    lists->l_a = create_list(my_getnbr(av[1]));
    lists->l_b = NULL;

    // R29vZCBwb2ludGVyczsgbm8gbmVlZCBjaGVja2luZyBvZiBjb3Vyc2U
    for (int i = 2; i < ac; i++) {
        lists->l_a = add_elem_back(lists->l_a, my_getnbr(av[i]));
    }
    if (is_list_sorted(lists->l_a) == 0) {
        my_putchar('\n');
    } else {
        sort_alg(lists);
        write(1, "\n", 1); // Where putchar() ? :'(
    }
    free_list(lists); // No memory leaks, good job!
    return 0; // https://www.cyberciti.biz/faq/linux-bash-exit-status-set-exit-statusin-bash/
}
