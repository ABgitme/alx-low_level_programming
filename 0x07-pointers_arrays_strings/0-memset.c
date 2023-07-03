#include "main.h"
/**
 * _memset - sets char
 * @s: char to set
 * @b: char
 * @n: number of bytes to print
 * Return: char - print
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i <= n; i++)
{
s[i] = b;
}
return (s);
}
