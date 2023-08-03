#include "main.h"
/**
 * binary_to_uint - function to convert binary to uint
 * @b : binary value to convert
 * Return: unsigned int value of binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int int_value = 0;
	int i;

	for (i = 0; b[i] != '\0'; i++)
	{
	if (b[i] == '1')
	{
		int_value = int_value << 1 | 1;
	}
	else if (b[i] == '0')
	{
		int_value <<= 1;
	}
	else
	{
		return (0);
	}
	}
	return (int_value);
}
