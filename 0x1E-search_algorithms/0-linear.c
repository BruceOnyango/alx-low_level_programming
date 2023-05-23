#include "search_algos.h"
/**
 * linear_search - linear search
 * @array: array to search
 * @size: size of array
 * @value: search item
 *
 * Return: target index, -1 if none
 */

int linear_search(int *array, size_t size, int value)
{
	int index;

	if (array == NULL)
		return (-1);
	for (index = 0; index < (int)size; index++)
	{
		printf("Value checked array[%u] = [%d]\n", index, array[index]);
		if (value == array[index])
			return (index);
	}
	return (-1);
}

