#include "search_algos.h"
/**
 * jump_search - Searches for a value in a sorted array
 * of integers using the Jump search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 * Return: The index where the value is located,
 * or -1 if the value is not found
 * or if the array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	int prev, step, len, i;

	if (!array || size == 0)
		return (-1);
	prev = 0;
	step = sqrt(size);
	len = (int)size;
	printf("Value checked array[0] = [%d]\n", array[0]);
	while (step < len && array[step] < value)
	{
		printf("Value checked array[%d] = [%d]\n", step, array[step]);
		prev = step;
		step += sqrt(size);
	}
	printf("Value found between indexes [%d] and [%d]\n", prev, step);
	for (i = prev; i <= fmin(step, len - 1); i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
