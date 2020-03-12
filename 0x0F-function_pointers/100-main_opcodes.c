#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point to func
*
* Description: program that prints the opcodes of it own main function.
* Return: Always 0
*/
int main(void)
{
	int bytes = 1;
	int args = 2;

	if (args != bytes)
	{
		printf("Error\n");
		exit(1);
	}

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
