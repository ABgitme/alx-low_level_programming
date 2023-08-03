#include "main.h"
/**
 * get_bit - function to bit value at index
 * @n : int value
 * @index: index of bit to return
 * Return: bit value at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	n >>= index;
	if (n == 0)
		return (-1);
	else
		return (n & 1);
}


