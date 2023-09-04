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
	
	new_str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (new_str == NULL)
		return NULL;
	_memcpy(new_str, s1, len1);
	_memcpy(new_str + len1, s2, len2 + 1);
	return new_str;
/*	char *new_str;
	char *starts1;
	char *starts2;
	int i = 0;
	int lens1 = 0;
	int lens2 = 0;

	starts1 = s1;
	starts2 = s2;
	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		lens1++;
		s1++;
	}
	s1 = starts1;
	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		lens2++;
		s2++;
	}
	s2 = starts2;
	new_str = malloc(sizeof(char) * (lens1 + lens2 + 1));
	starts1 = new_str;
	if (new_str == NULL)
		return (NULL);
	for (; i < (lens1 + lens2); i++)
	{
		if (i < lens1)
		{
			new_str[i] = *s1;
			s1++;
		}
		else
		{
			new_str[i] = *s2;
			s2++;
		}
	}
	new_str[i] = '\0';
	return (starts1);*/
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
