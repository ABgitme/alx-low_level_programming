#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - A function that splits a string into words
 * @ac: argument
 * @av: argument
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	int len = 0;
	int i;
	char *s;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}
	s = malloc(len + ac + 1);
	if (s == NULL)
		return NULL;
	for (i = 0; i < ac; i++)
	{
		strcat(s, av[i]);
		strcat(s, "\n");
		strcat(s, "\0");
	}
	return (s);
}
