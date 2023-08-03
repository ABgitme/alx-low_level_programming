#include "main.h"

/**
 * print_binary - function to convert int to binary
 * @n : int value to convert
 */
void print_binary(unsigned long int n) {
    unsigned int rem;
      	if (n == 0) {
        _putchar('0');
        return;
    }
    
    rem = n & 1; 
    _putchar(rem + '0');
    
    if (rem == 0) {
        print_binary(n >> 1); 
    } else {
        print_binary(n ^ 1); 
    }
}
