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
unsigned char *p = s;
while (n--)
{
*p++ = (unsigned char)b;
}
return (s);

