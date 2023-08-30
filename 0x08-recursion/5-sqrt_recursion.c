#include "main.h"
int _sqrt(int guess, int root);
/**
 * _sqrt_recursion - It returns the value of square root of n.
 * @n: an input integer
 * Return: The square root of n
 */
int _sqrt_recursion(int n)
{
if (n > 0)
return (_sqrt(1, n));
else
return (-1);
}
/**
 * _sqrt - find square root
 * @guess: previous value
 * @root: square root value
 * Return: the square root
 */
int _sqrt(int guess, int root)
{
if (guess > root)
return (-1);
else if (guess * guess == root)
return (guess);
return (_sqrt(guess + 1, root));
}

