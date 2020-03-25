#include "lists.h"
/**
* insert_nodeint_at_index - function
* @head: double pointer to first node of list
* @idx: index where new node should be added
* @n: new node to insert
*
* Description: function to insert a new node at a given position
* Return: the address of the new node, or null if fail
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp;
	unsigned int num;

	if (head == NULL)
		return (NULL);

	newNode = (listint_t *)malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	temp = *head;


		for (num = 2; num <= idx; num++)
		{
			temp = temp->next;

			if (temp == NULL)
				return (NULL);
		}
		if (temp != NULL)
		{
			newNode->next = temp->next;
			temp->next = newNode;
		}
		else
			return (NULL);

	return (newNode);
}
