#include<stdio.h>
#include<stdlib.h>
/**
* main - Entry point
*
* puts -print declared char string to std output
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char string[51];

	strcpy(string, "Programming is like building a multilingual puzzle\n");

	puts(string);

	return (0);
}
