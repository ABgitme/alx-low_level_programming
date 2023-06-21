#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - fuction
 * @i: A input integer
 * Description: function that prints all natural numbers
 * from n to 98, followed by a new line.
 * Return: Nothing
 */
void print_to_98(int i)
{
if (i <= 98)
{
for (; i <= 98; i++)
{
printf("%d", i);
if (i == 98)
continue;
printf(", ");
}
printf("\n");
}
else
{
for (; i >= 98; i--)
{
printf("%d", i);
if (i == 98)
continue;
printf(", ");
}
printf("\n");
}
}
