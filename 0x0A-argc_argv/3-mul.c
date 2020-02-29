#include<stdio.h>
#include<stdlib.h>
/**
* main - function, entry point
* @argc: # of args passed
* @argv: strings passed indiv as arg to prog
*
* Description: program that multiplies two numbers
* Return: ALways 0
*/
int main(int argc, char *argv[])
{
	int i, val = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			val *= atoi(argv[i]);
		}
		printf("%d\n", val);
	}
	else if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
