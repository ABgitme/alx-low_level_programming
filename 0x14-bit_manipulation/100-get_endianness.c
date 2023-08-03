#include "main.h"

/**
 * get_endianness - function to flip bit from value n to m
 * Return: returns 1 if little-endian,0 big-endian
 */
int get_endianness(void)
{
/*
 * A union that can store either an array of 4 bytes or an unsigned integer.
 */
	union
	{
	unsigned char bytes[4];
	unsigned int value;
	} u;
/* Initialize the union. */
	u.value = 1;
/* Check the byte at the least significant end. */
	if (u.bytes[0] == 1)
		return (1);
	else
		return (0);
}

