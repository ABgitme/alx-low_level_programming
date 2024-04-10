#include "search_algos.h"

/**
 * binary_search_adv - Performs a binary search within
 * a specified range of the array.
 *
 * @array: Pointer to the first element of the array to search in.
 * @left: Index of the left boundary of the search range.
 * @right: Index of the right boundary of the search range.
 * @value: Value to search for.
 * Return: The index of the value in the array if found, otherwise -1.
 *
 * This function performs a binary search within
 * the specified range of the array to find the value.
 * It prints the values in the range being searched at each step.
 */
int binary_search_adv(int *array, size_t left, size_t right, int value)
{
	size_t i, mid;

	if (array == NULL || left > right)
		return (-1);
	mid = left + (right - left) / 2;
	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
		{
			printf(", ");
		}
	}
	printf("\n");
	if (array[mid] == value)
	{
		if (mid == 0 || array[mid - 1] != value)
			return (mid);
		else
			return (binary_search_adv(array, left, mid, value));
	}
	else if (array[mid] < value)
		return (binary_search_adv(array, mid + 1, right, value));
	else
		return (binary_search_adv(array, left, mid - 1, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array
 * of integers using the advanced binary search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 * Return: The index of the first occurrence of the value
 * in the array if found, otherwise -1.
 * Description: This function searches for a value in a sorted
 * array of integers using recursion and the binary search algorithm.
 * It prints the values in the array being searched at each
 * step and returns the index of the first occurrence of
 * the value if found, otherwise -1.
 *
 * If the value appears more than once in the array,
 * this function returns the index of the first occurrence.
 */
int advanced_binary(int *array, size_t size, int value)
{
    /*Check for null pointer or empty array*/
	if (!array || size == 0)
		return (-1);
	return (binary_search_adv(array, 0, size - 1, value));
}
