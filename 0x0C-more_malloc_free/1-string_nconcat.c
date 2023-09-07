#include <stdlib.h>
/**
 * string_nconcat - A function that concatenates two strings
 * @s1: pointer of the first string
 * @s2: pointer of the second string
 * @n: integer of number of string
 * Return: Apointer to concatened strings or NULL if NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i = 0, sizes1 = 0, sizes2 = 0;

	if (s1 == NULL)
		s1 = "";
	while (s1[sizes1])
		sizes1++;
	if (s2 == NULL)
		s2 = "";
	while (s2[sizes2])
		sizes2++;
	if (n >= sizes2)
		n = sizes2;
	new_str = malloc(sizes1 + n + 1);
	if (new_str == NULL)
		return (NULL);
	for (; i < len1; i++)
	{
		new_str[i] = s1[i];
	}
	for (; i < len1 + n; i++)
	{
		new_str[i] = s2[i - len1];
	}
	new_str[i] = '\0';
	return (new_str);
}
