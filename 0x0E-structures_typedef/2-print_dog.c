#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_dog - function
* @d: pointer to struct dog
*
* Description: function to print a struct dog
* Return: ptr to struct dog.
*/
void print_dog(struct dog *d)
{
	struct dog;

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	if (d != '\0')
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.1f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	return;
}
