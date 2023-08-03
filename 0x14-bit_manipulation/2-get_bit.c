#include "main.h"
/**
 * get_bit - function to bit value at index
 * @n : int value
 * @index: index of bit to return
 * Return: bit value at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}


