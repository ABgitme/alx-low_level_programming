#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * lastDigit - This is a function to return last digit of the random number
 * @number: random number
 * Return: returns the last digit
 */
int lastDigit(int number)
{
return (number % 10);
}
/**
 * main - Entry point
 * Description: 'The last digit'
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = lastDigit(n);
if (last_digit < 6 && last_digit != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
}
else if (last_digit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
}
else
{
printf("Last digit of %d is 0 and is 0\n", n);
}
return (0);
}
