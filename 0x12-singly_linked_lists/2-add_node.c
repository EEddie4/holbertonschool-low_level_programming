#include "lists.h"
/**
* add_node - function
* @head: list to add to
* @str: string to duplicate
*
* Description: Fnction to add nodes to the list_t list.
* Return: address of new element or NULL if fail
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int length, index = 0;
	char *dupstr;

	while (*str)
	{
		index++;
		str++;
	}
	length = str[index];
	if (str == NULL)
		return (NULL);
	dupstr = strdup(str);
	newNode = (list_t *)malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = dupstr;
	newNode->len = length;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
