#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
* _realloc - function
* @ptr: pointer prev alloc
* @old_size: old size
* @new_size: new memory block
*
* Description: function that reallocates a memory block using malloc and free
* Return: ptr
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (old_size == new_size)
		return (NULL);

	return (ptr);
}

