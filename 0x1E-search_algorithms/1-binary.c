#include <stdio.h>

/**
 * binary_search - binary search implementation
 *
 * @array: input array
 * @size: size of the array
 * @value: search item
 * Return: index
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t middle;
	size_t i;

	if (!array)
		return (-1);

	while (left <= right)
	{
		middle = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right]);

		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}

	return (-1);
}
