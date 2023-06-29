#include "main.h"
/**
 * rot13- a function that rotates a string
 * @sr: array of strings
 * Return: string
 */
char *rot13(char *sr)
{
int i;
for (i = 0; sr[i] != '\0'; i++)
{
while ((sr[i] >= 'a' && sr[i] <= 'z') || (sr[i] >= 'A' && sr[i] <= 'Z'))
{
if ((sr[i] >= 'a' && sr[i] <= 'm') ||
(sr[i] >= 'A' && sr[i] <= 'M'))
sr[i] += 13;
else
sr[i] -= 13;
i++;
}
}
return (sr);
}
