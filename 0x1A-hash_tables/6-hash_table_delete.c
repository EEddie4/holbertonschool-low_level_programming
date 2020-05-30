#include "hash_tables.h"
/**
* hash_table_delete - function
* @ht: hash table to delete
*
* Description: Function to delete a hash table.
* Return: 0 (Success)
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *moveNode;
	unsigned long int index;

	if (ht == NULL)
		return;

	for (index = 0; index < (ht->size); index++)
	{
		moveNode = ht->array[index];
		while (moveNode != NULL)
		{
			free(moveNode);
			free(moveNode->key);
			free(moveNode->value);
			moveNode = moveNode->next;
		}
	}
	free(ht);
}
