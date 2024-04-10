#include "search_algos.h"
/**
 * binary_search_exp - Searches for a value in a sorted array
 * of integers using the binary search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @left: Index of the left boundary of the search range.
 * @right: Index of the right boundary of the search range.
 * @value: Value to search for.
 * Return: The index of the value in the array if found, otherwise -1.
 * Description: This function searches for a value in a sorted array
 * of integers within the specified range
 * using the binary search algorithm.
 * It prints the values in the range being searched at each step.
 */
int binary_search_exp(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");
		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return  (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array
 * of integers using the Exponential search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 * Return: The index of the first occurrence of the value
 * in the array if found, otherwise -1.
 * Description:This function searches for a value
 * in a sorted array of integers using the Exponential search algorithm.
 * It first exponentially increases the range of search
 * until the range contains the value or exceeds
 * the size of the array. Once the range is found,
 * it performs a binary search within that range
 * to find the exact index of the value.
 *
 * The function also prints the values checked during the exponential
 * search and the subarrays searched
 * during the binary search, as well as the index
 * where the value is found or a message indicating that
 * the value is not present in the array.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound;

	if (!array || size == 0)
		return (-1);
	bound = 1;
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			bound / 2, (bound < size) ? bound : size - 1);
	return (binary_search_exp(array, bound / 2,
				(bound < size) ? bound : size - 1, value));
}
