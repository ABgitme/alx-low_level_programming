#include "main.h"
/**
 * get_bit - function to bit value at index
 * @n : int value
 * @index: index of bit to return
 * return: bit value at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	n >>= index;
	return (n & 1);
}


