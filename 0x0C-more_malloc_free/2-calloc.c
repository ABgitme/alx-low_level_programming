#include "main.h"
#include <stdlib.h>
/**
 * _calloc - A function that allocates memory for an array using malloc
 * @nmemb: number of memory spaces
 * @size: size of nmemb
 * Return: returns pointer to allocated space, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(nmemb * size);
	if (c == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		c[i] = 0;
	return (c);
}
