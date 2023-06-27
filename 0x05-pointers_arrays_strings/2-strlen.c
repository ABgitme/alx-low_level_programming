#include "main.h"
/**
 * _strlen - Solve me
 * @s: character
 * Return: string
 */
int _strlen(char *s)
{
int size = 0;
while (s[size] != '\0')
size++;
return (size);
}
