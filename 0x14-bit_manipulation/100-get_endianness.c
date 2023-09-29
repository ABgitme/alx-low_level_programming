#include "main.h"

/**
 * get_endianness - function to get endianess
 * Return: returns 1 if little-endian,0 big-endian
 */
int get_endianness(void)
{
	unsigned char byte;
	int val = 1;

	byte = *(unsigned char *)&val;
	if (byte == 1)
		return (1);
	else
		return (0);
}

