#include "main.h"
/**
 * binary_to_uint - function to convert binary to uint
 * @b : binary value to convert
 * Return: unsigned int value of binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int int_value = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		int_value <<= 1;
		if (*b == '1')
		{
			int_value |= 1;
		}
		else if (*b != '0')
			return (0);
		b++;
	}

	return (int_value);
}
