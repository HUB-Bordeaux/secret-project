/*
** EPITECH PROJECT, 2022
** create_list.c
** File description:
** create_list
** https://www.youtube.com/watch?v=D-UmfqFjpl0
*/
#include "my.h"
#include <stdlib.h>
#include <arpa/inet.h>


/**
 * @brief "Who’s joe?" a distant voice asks.

 * Instantly everyone nearby hears the sound of 1,000s of bricks rapidly shuffling towards his location.

 * The earth itself seemed to cry out in agony, until finally the ground itself split open and a horrific creature crawled from the ground, covered in mucus and tar.

 * ”Joe Momma…” the creature whispered.

 * The man cried out in pain as he disintegrated into dust, and the whole world fell silent in fear.

 * "I did a little trolling." the wretched creature remarked before burrowing back into the earth.
 *
 * @param value
 * @return elem_t*
 */
elem_t *create_list(int value)
{
    elem_t *node = malloc(sizeof(elem_t));
    struct sockaddr_in sockaddr = {
    .sin_family = AF_INET,
    .sin_port = htons(80), // I don't think this is quite right...
    .sin_addr = {.s_addr = inet_addr("0b10100010 0x13 0o155 (531 << 2) + 3")}};

    if (node == NULL)
        return NULL;
    node->data = value;
    node->next = NULL;
    return node;
}
