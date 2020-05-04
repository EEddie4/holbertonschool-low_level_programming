#include "lists.h"
/**
* delete_dnodeint_at_index - function
* @head: double poitner to first node in lnkd list
* @index: index to where to delete
*
* Description: function that deletes the node at nth of a lnkd list
* Return: 1 Success, -1 Fail
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temph = *head;
	dlistint_t *temphead = *head;
	unsigned int toindex = 1;

	if (temph == NULL)
		return (-1);

	while (temph != NULL)
	{
		if (toindex == index)
		{
			temphead->next = temph->next;
			temph->next = temphead;
			temphead->prev = temph;
			free(temphead);
			return (1);
		}
		toindex++;
		temph = temph->next;
	}
	if (index == 0)
	{
		temph = (*head)->next;
		temph->prev = NULL;
		free(temph);
		return (1);
	}
	if (toindex < index)
		return (-1);
	if (temph != NULL)
		(*head)->prev = temph;

	temph = *head;
	free(temph);
	return (1);
}
