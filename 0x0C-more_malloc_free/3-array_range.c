#include "main.h"
#include <stdlib.h>
/**
 * array_range - A function that creates an array of integers
 * @min: min number to start
 * @max: max number to start
 * Return: pointer
 */
int *array_range(int min, int max)
{
int *ar;
int i;

if (max < min)
return (NULL);

ar = malloc(((max - min) + 1) * sizeof(int));
if (ar == NULL)
return (NULL);

for (i = 0; i <= max; i++)
ar[i] = min++;
return (ar);
}
