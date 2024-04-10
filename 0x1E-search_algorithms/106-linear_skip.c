#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 *
 * @list: Pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where the value is located. If the value
 * is not present in the list or if the head is NULL, NULL is returned.
 *
 * Description: This function traverses the skip list to search for the
 * specified value. It uses an express lane placed every index which is a
 * multiple of the square root of the size of the list for optimized searching.
 * The function prints the value checked at each index during the search, and
 * also prints the range of indexes where the value is expected to be found.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *express;

	if (!list)
		return (NULL);
	current = list;
	express = list->express;
	while (express)
	{
		printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
		if (express->n >= value)
			break;
		current = express;
		express = express->express;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			current->index, express->index);
	while (current)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}
	return (NULL);
}
