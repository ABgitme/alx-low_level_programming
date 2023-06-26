#include "main.h"
/**
 * _puts - Solve me
 * @str: character
 * Return: none
 */
int _puts(char *str)
{
int size = 0;
while (str[size] != '\0')
size++;
while (size)
_putchar(str[--size]);
_putchar('\n');
}
