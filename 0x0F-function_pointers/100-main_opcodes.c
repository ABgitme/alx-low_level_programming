#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints opcode of own main function
 * @argc: argument count
 * @argv: array of arguments
 * Return: 1 or 2 on fail, 0 on success
 */
int main(int argc, char *argv[])
{
	int i;
	int num_bytes;

	/*Check the number of arguments*/
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
  /*Convert the number of bytes to an integer*/
	num_bytes = atoi(argv[1]);
  /*Check if the number of bytes is negative*/
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
  /*Get the address of the main function*/
	void *main_addr = (void *)main;
  /*Iterate over the first `num_bytes` bytes of the main function*/
	for (i = 0; i < num_bytes; i++)
	{
    /*Get the opcode at the current byte*/
		unsigned char opcode = *((unsigned char *)main_addr + i);
    /*Print the opcode in hexadecimal, lowercase*/
		printf("%02x ", opcode);
	}
	printf("\n");
	return (0);
}

