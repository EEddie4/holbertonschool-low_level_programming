#include<stdio.h>
/**
* main - Entry point
* putchar for printing numbers 00 to 99
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = '0';
	int d = '0';

	while ((i <= '9') && (d <= '9'))
	{
		putchar(i);
		putchar(d);
		if (i == d)
		{
			break;
		}
	while ((i < '9') && (d < '9'))
	{
		putchar(',');
		putchar(' ');
	}
		i++;
		d++;
	}
	putchar(10);
	return (0);
}
