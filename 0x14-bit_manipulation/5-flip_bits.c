#include "main.h"

/**
 * flip_bits - function to flip bit from value n to m
 * @n: number 1
 * @m: number 2
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
/* Initialize the number of bits to flip. */
	unsigned int bits_to_flip = 0;

/* Iterate through the bits of the two numbers. */
	for (int i = 0; i < 32; i++)
	{
/* If the bits are different, increment the number of bits to flip. */
	if ((n & (1 << i)) != (m & (1 << i)))
	{
		bits_to_flip += (n & (1 << i)) ^ (m & (1 << i));
	}
	}
	return (bits_to_flip);
}
