#include "holberton.h"
/**
* main - Entry point
* _putchar function to print a string.
* Return: Always 0 (Success)
*/
int main(void)
{
	char ch[] = "Holberton";
	int i = 0;

	while (i < 9)
	{
		_putchar(ch[i]);
		i++;
	}
	_putchar(10);
	return (0);
}
