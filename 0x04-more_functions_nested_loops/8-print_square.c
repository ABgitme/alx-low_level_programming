#include "main.h"
/**
 * print_square - Write a function that prints a square,
 * followed by a new line.
 * @side: An input integer
 * Return: Always 0
 */
void print_square(int side)
{
int i, j;
if (side > 0)
{
for (i = 0; i < side; i++)
{
for (j = 0; j < side; j++)
_putchar('#');
_putchar('\n');
}
}
else
_putchar('\n');
}
