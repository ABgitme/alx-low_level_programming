#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - sets char
 * @s: char to set
 * @accept: char
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
char *tmp;	
if (s == NULL || accept == NULL)
{
return (NULL);
}
while (*s != '\0')
{
tmp = accept;
while (*tmp != '\0')
{
if (*s == *tmp)
{
return (s);
}
tmp++;
}
s++;
}
return (NULL);
}
