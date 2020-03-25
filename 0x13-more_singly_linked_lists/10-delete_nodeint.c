#include "lists.h"
/**
* delete_nodeint_at_index - function
* @head: double pointer to first node of list
* @index: index of node that should be deleted
*
* Description: function to dlete the node at index of a listint_t list
* Return: 1 is success, -1 if fail
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	unsigned int ind = 0;

	temp = head;
	while (temp != NULL)
	{
		if (ind == index)
		{
			return (temp);
		}
		ind++;
		temp = temp->next;
	}
	if (ind == 0)
		return (temp);
	if (ind < index)
		return (temp);
	temp = head;
	return (temp->next);
}
