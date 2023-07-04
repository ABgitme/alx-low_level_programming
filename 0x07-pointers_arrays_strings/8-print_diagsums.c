#include "main.h"
/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * @a: a square matrix of integers
 * @size: an input integer with the size of matrix
 */
void print_diagsums(int *a, int size)
{
int i = 0;
int max_size;
int sum1 = 0;
int sum2 = 0;
max_size = size * size;
for (; i < max_size; i += size + 1)
sum1 += a[i];
for (i = size - 1; i < max_size - 1; i += size - 1)
sum2 += a[i];
printf("%d, %d\n", sum1, sum2);
}
