#include "main.h"
/**
 * rev_string - Solve me
 * @s: character
 */
void rev_string(char *s)
{
int size = 0, i = 0;
char tmp;
while (s[size] != '\0')
size++;
while (i < size--)
{
tmp = s[i];
s[i++] = s[size];
s[size] = tmp;
}
}
