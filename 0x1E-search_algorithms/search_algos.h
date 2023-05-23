#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS
#include <stdio.h>
/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index
 * @next: Pointer
 *
 * Description: singly linked list
 */

typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif
