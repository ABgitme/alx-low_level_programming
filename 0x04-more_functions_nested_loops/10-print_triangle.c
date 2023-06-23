#include "main.h"
/**
 * print_triangle -  a function that prints a triangle, followed by a new line.
 * @side: An input integer
 * Return: Always 0
 */
void print_triangle(int side)
{
int i = 0, j, n = side - 1;
if (side > 0)
{
for (; i < side; i++)
{
for (j = 0; j < side; j++)
{
if (j < n)
_putchar(' ');
else
_putchar('#');
}
n--;
_putchar('\n');
}
}
else
_putchar('\n');
}
