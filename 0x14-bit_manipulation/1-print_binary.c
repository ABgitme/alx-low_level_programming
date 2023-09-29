#include "main.h"

/**
 * bit_length - Returns the lenght of bit of an unsigned int.
 * @n: unsigned int bit lenth to look for
 * Return: bit lenght
 */
int bit_length(unsigned int n)
{
	int bits = 0;

	while (n != 0)
	{
		bits++;
		n >>= 1;
	}
	return (bits);
}
/**
 * print_binary - A function that prints a binary number without % or /
 * @n: The number to be printed
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	/*char c;
	int max_bits, i;

	if (n == 0)
	{
		_putchar('0');
	}
	max_bits = bit_length(n);
	for (i = max_bits - 1; i >= 0; i--)
	{
		c = '0' + ((n >> i) & 1);
		_putchar(c);
		if (n == 0)
		{
			break;
		}
	}*/

	int i, max_bits;

	max_bits = bit_length(n);

	if (n == 0)
		_putchar('0');
	for (i = max_bits - 1; i >= 0; i--)
	{
		_putchar(((n >> i) & 1) + '0');
	}

}
