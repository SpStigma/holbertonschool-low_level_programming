#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 *                 using the Binary search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return: eturn the index where value is located, or -1 otherwise.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t i = 0;

	if (array == 0 || size == 0)
		return (-1);

	while (low <= high)
	{
		size_t mid = low + (high - low) / 2;

		printf("Searching in subarray: ");
		for (i = low; i <= high ; i++)
		{
			printf("%d", array[i]);

			if (i < high)
			{
				printf(", ");
			}
			else
				printf("\n");
		}

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
