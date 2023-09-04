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
  for (i = 0; i < ac; i++) {
    len += strlen(av[i]);
  }
  s = malloc(len + ac + 1); 
  if (s == NULL) return NULL;

  for (i = 0; i < ac; i++) {
    strcat(s, av[i]);
    strcat(s, "\n");
  }

  return s;
/*int ch = 0, i = 0, j = 0, k = 0;
char *s;
if (ac == 0 || av == NULL)
return (NULL);
while (i < ac)
{
while (av[i][j])
{
ch++;
j++;
}
j = 0;
i++;
}
s = malloc((sizeof(char) * ch) +(ac + 1));
i = 0;
while (av[i])
{
while (av[i][j])
{
s[k] = av[i][j];
k++;
j++;
}
s[k] = '\n';
j = 0;
k++;
i++;
}
k++;
s[k] = '\0';
return (s);*/
}