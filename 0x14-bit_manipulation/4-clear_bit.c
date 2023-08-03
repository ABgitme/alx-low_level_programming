#include "main.h"

/**
 * clear_bit - function to clear bit value at index
 * @n : int value
 * @index: index of bit to clear
 * Return: 1 no error ,0 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	if (index >= 32)
	{
		return (-1);
	}
	else
	{
		mask = 1 << index;
		*n &= ~mask;
		return (1);
	}
}
