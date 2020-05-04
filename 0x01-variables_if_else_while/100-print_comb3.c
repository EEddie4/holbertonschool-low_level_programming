#include <stdio.h>
/**
* main - entry point
* print all possible combinations of 2 digits
* Return: Always 0 Success
*/
int main(void)
{
	int num, num2;

	for (num = 0; num < 10; num++)
	{
		for (num2 = 1; num2 < 10; num2++)
		{
			if (num2 > num)
			{
				putchar(num + '0');
				putchar(num2 + '0');
				if (num == 8 && num2 == 9)
				{
					putchar(10);
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
