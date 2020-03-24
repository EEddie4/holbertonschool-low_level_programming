#include "lists.h"
/**
* get_nodeint_at_index - function
* @head: pointer to first node of list
* @index: index of nodes starting at 0
*
* Description: function to return the nth node of listint_t
* Return: nth node or NULL if does not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i, ind = 0;

	temp = head;
	while (!temp)
	{
		if (ind == index)
			return (temp);
		ind++;
		temp = temp->next;
	}
	if (ind == 0)
		return (NULL);
	if (ind < index)
		return (0);
	temp = head;
	for (i = 1; i < index - 1; i++)
		temp = temp->next;
	return (temp);
}
