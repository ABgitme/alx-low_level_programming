#include "main.h"
/**
 * print_rev - Solve me
 * @str: character
 * Return: none
 */
void print_rev(char *str)
{
int size = 0;
while (str[size] != '\0')
size++;
while (size)
_putchar(str[--size]);
_putchar('\n');
}
