#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int k, sum = 0;
for (k = 0; k < 1024; k++)
{
if ((k % 5) == 0 || (k % 3) == 0)
sum += k;
}
printf("%d\n", sum);
return (0);
}
