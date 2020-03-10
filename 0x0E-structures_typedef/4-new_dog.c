#include "dog.h"
#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
* new_dog - function
* @name: name of dog
* @age: age of new doggo
* @owner: owner of new doggo
*
* Description: function to create a new dog. Store copy of name & owner
* Return: ptr, null if fail
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	char *doggo;

	while (age);
	if (name == NULL || owner == NULL)
		return (NULL);
	doggo = malloc(sizeof(char) * (_strlen(name) + _strlen(owner) + 1));
	if (doggo == NULL)
		return (NULL);
	return (0);
}

/**
* _strlen - function
* @s: first operand & pointer
*
* Description: function that returns the length of a string
* Return: Always 0
*/
int _strlen(char *s)
{
	int index = 0;

	while (*s != '\0')
	{
		index++;
		s++;
	}
	return (index);
}
/**
* _strcpy - function
* @src: copy from
* @dest: copy to
*
* Description: copies strng pnted by src to dest with null
* Return: char
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
