#include "lists.h"
/**
* insert_dnodeint_at_index - function
* @h: double pointer to first node of dbl lnkd list
* @idx: index to where new node is added
* @n: data of new node
*
* Description: function to insert a new node at a given index
* Return: Address of new node or NULL if fail.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t *temph = *h;
	unsigned int toindex = 1;
	int num = n;

	if (temph == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = num;

	while (temph != NULL)
	{
		if (toindex == idx)
		{
			newNode->next = temph->next;
			temph->next = newNode;
			newNode->prev = temph;
		}
		toindex++;
		temph = temph->next;
	}
	if (toindex == 0)
		return (temph);
	if (toindex < idx)
		return (NULL);

	temph = *h;
	return (newNode);
}
