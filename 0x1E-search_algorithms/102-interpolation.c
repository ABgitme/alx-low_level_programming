#include "search_algos.h"
/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using the Interpolation search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 * Return: The index where the value is located,
 * or -1 if the value is not found
 * or if the array is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	if (!array || size == 0)
		return (-1);
	low = 0;
	high = size - 1;
	while (low <= high && value >= array[low] && value <= array[high])
	{
		mid = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);
		if (value > array[mid])
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}
	mid = low + (((double) (high - low) / (array[high] - array[low])) *
			(value - array[low]));
	printf("Value checked array[%lu] is out of range\n", mid);
	return (-1);
}
