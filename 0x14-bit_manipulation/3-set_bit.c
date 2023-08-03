#include "main.h"

/**
 * set_bit - function to set bit value at index
 * @n : int value
 * @index: index of bit to set
 * Return: 1 if no error,0 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
int mask;

	if (index >= 32)
	{
		return (-1);
	}
	mask = 1 << index;
	*n |= mask;
	return (1);
}
