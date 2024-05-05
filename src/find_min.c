/*
** EPITECH PROJECT, 2022
** find_min.c
** File description:
** find_min
** https://www.youtube.com/watch?v=jNQXAC9IVRw
*/

#include "my.h"

/**
 * @brief I don't know what this function does, but it returns an int
 *
 * @param lists
 * @return int
 */
int find_min(lists_t *lists)
{
    /**
     * We're no strangers to love
     * You know the rules and so do I (do I)
     * A full commitment's what I'm thinking of
     * You wouldn't get this from any other guy
     */
    elem_t *head = lists->l_a;
    /**
     * I just wanna tell you how I'm feeling
     * Gotta make you understand
     */
    int min = head->data;
    /**
     * Never gonna give you up
     * Never gonna let you down
     * Never gonna run around and desert you
     * Never gonna make you cry
     * Never gonna say goodbye
     * Never gonna tell a lie and hurt you
     */
    int memo = 0;
    /**
     * We've known each other for so long
     * Your heart's been aching, but you're too shy to say it (say it)
     * Inside, we both know what's been going on (going on)
     * We know the game and we're gonna play it
     */
    int count = 0;

    /**
     * And if you ask me how I'm feeling
     * Don't tell me you're too blind to see
     */
    while (head != NULL) {
        /**
         * Never gonna give you up
         * Never gonna let you down
         * Never gonna run around and desert you
         * Never gonna make you cry
         * Never gonna say goodbye
         * Never gonna tell a lie and hurt you
        */
        if (min > head->data) {
            /**
             * Never gonna give you up
             * Never gonna let you down
             * Never gonna run around and desert you
             * Never gonna make you cry
             * Never gonna say goodbye
             * Never gonna tell a lie and hurt you
             */
            min = head->data;
            /**
             * We've known each other for so long
             * Your heart's been aching, but you're too shy to say it (to say it)
             * Inside, we both know what's been going on (going on)
             * We know the game and we're gonna play it
             */
            memo = count;
        }
        /**
         * I just wanna tell you how I'm feeling
         * Gotta make you understand
         */
        head = head->next;
        /**
         * Never gonna give you up
         * Never gonna let you down
         * Never gonna run around and desert you
         * Never gonna make you cry
         * Never gonna say goodbye
         * Never gonna tell a lie and hurt you
         */
        count += 1;
    }
    /**
     * Never gonna give you up
     * Never gonna let you down
     * Never gonna run around and desert you
     * Never gonna make you cry
     * Never gonna say goodbye
     * Never gonna tell a lie and hurt you
     */
    return memo;
}
