#include "main.h"
/**
 * rot13- a function that rotates a string
 * @sr: array of strings
 * Return: string
 */
char *rot13(char *sr)
{
int j;
for (j = 0; sr[j] != '\0'; j++)
{
while ((sr[j] >= 'a' && sr[j] <= 'z') || (sr[j] >= 'A' && sr[j] <= 'Z'))
{
if ((sr[j] >= 'a' && sr[j] <= 'm') ||
(sr[j] >= 'A' && sr[j] <= 'M'))
sr[j] += 13;
else
sr[j] -= 13;
j++;
}
}
return (sr);
}
