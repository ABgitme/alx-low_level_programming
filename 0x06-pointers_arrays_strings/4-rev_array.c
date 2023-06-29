#include "main.h"
/**
 * reverse_array- a function that reverse the array
 * @a: the value1
 * @n: number of variables
 */
void reverse_array(int *a, int n)
{
int i;
int tmp;
for (i = 0; i < n--; i++)
{
tmp = a[i];
a[i] = a[n];
a[n] = tmp;
}
}

