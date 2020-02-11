#include"holberton.h"
/**
* print_alphabet_x10 - print alphabet 10x
*
* description: print alphabet lowercase in ascending order 10x
* Return: 0
*/
void print_alphabet_x10(void)
{
	char ch = 'a';
	int i = 0;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		i++;
		_putchar(10);
	}
}
