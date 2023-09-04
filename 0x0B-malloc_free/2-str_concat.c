#include <stdlib.h>
#include <string.h>

char *_memcpy(char *dest, char *src, unsigned int n);
/**
 * str_concat - A function that concatenates two strings
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * Return: Apointer to concatened strings or NULL if it str is NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	new_str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (new_str == NULL)
		return (NULL);
	_memcpy(new_str, s1, len1);
	_memcpy(new_str + len1, s2, len2 + 1);
	return (new_str);
}

/**
 * _memcpy - sets char
 * @dest: char to set
 * @src: char
 * @n: number of bytes to print
 * Return: char destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *ch_dest = (char *) dest;
	char *ch_src = (char *) src;

	for (i = 0; i < n; i++)
	{
		ch_dest[i] = ch_src[i];
	}
	return (dest);
}
