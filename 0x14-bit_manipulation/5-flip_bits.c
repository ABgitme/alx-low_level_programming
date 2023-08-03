#include "main.h"

/**
 * flip_bits - function to flip bit from value n to m
 * @n: number 1
 * @m: number 2
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
/* Initialize the number of bits to flip.*/
	unsigned int flip = 0;
	int i = 0;
/* Iterate through the bits of the two numbers. */
	for ( ; i < 32; i++)
	{
/* If the bits are different, increment the number of bits to flip. */
		if ((n & (1 << i)) != (m & (1 << i)))
		{
/* If the bits are different, but both are 1, do not increment the count. */
			if ((n & (1 << i)) && (m & (1 << i)))
			{
			}
			else
			{
				flip++;
			}
		}
	}
	return (flip);
}
