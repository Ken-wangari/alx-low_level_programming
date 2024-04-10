#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a skip list
 *
 * @list: input list
 * @value: value to search in
 * Return: pointer to the node with the value, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *current, *express;

    if (list == NULL)
        return (NULL);

    current = list;
    express = list->express;

    while (express)
    {
        printf("Value checked at index [%d] = [%d]\n", (int)express->index, express->n);

        if (express->n >= value)
            break;

        current = express;
        express = express->express;
    }

    printf("Value found between indexes [%d] and [%d]\n", (int)current->index, (int)express->index);

    while (current != express->next)
    {
        printf("Value checked at index [%d] = [%d]\n", (int)current->index, current->n);

        if (current->n == value)
            return (current);

        current = current->next;
    }

    return (NULL);
}

