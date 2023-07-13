#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * malloc_checked - check the code
 * @b: bytes to be checked
 * Return: pointer to allocated mem.
 */
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
