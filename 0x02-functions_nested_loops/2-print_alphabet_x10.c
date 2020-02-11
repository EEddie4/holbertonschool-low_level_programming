include"holberton.h"
/**
* description: print alphabet lowercase in ascending order 10x
* Return: 0
*/
void print_alphabet_x10(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	putchar(10);
	return (0);
}
