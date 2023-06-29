#include "main.h"
/**
 * leet- a function that encodes a string
 * @sr: array of strings
 * Return: string
 */
char *leet(char *sr)
{
int i = 0, j;
char replace[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
char str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
while (sr[i])
{
for (j = 0; j < 10; j++)
if (sr[i] == str[j])
sr[i] = replace[j];
i++;
}
return (sr);
}
