#include<stdio.h>
/**
* main - Entry point
* putchar for printing numbers 00 to 99
* Return: Always 0 (Success)
*/
int main(void)
{
	int tens = '0';
	int ones = '0';

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			putchar(tens);
			putchar(ones);
			if (tens != '9' || ones != '9')
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar(10);
	return (0);
}
