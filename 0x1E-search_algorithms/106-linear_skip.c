#include "search_algos.h"

/**
 * linear_skip - searches for a value in a skip list
 *
 * @list: input list
 * @value: value to search in
 * Return: pointer to the node containing the value, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	if (list == NULL)
		return NULL;

	skiplist_t *current = list, *next_express = list->express;

	while (next_express != NULL)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)next_express->index, next_express->n);
		if (next_express->n >= value || next_express->express == NULL)
		{
			printf("Value found between indexes [%d] and [%d]\n", (int)current->index, (int)next_express->index);
			break;
		}
		current = next_express;
		next_express = next_express->express;
	}

	while (current != NULL && current->index <= next_express->index)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)current->index, current->n);
		if (current->n == value)
			return current;
		current = current->next;
	}

	return NULL;
}

