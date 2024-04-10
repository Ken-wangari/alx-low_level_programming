#ifndef SEARCH_ALGORITHMS_H
#define SEARCH_ALGORITHMS_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: Integer
 * @index: the index of the node 
 * @next: the pointer to the  node which is next
 *
 * Description: singly linked list node structur
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 * @n: Integer
 * @index: the index of the node
 * @next: the pointer to the node which is next
 * @express: the pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

/* Function prototypes */
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif /* SEARCH_ALGORITHMS_H */
