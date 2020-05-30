#include "hash_tables.h"
/**
* hash_table_print - function
* @ht: table to print
*
* Description: function to print a hash table.
* Return: Nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *movenode;
	unsigned long int index;

	if (ht == NULL)
		return;

	for (index = 0; index < (ht->size); index++)
	{
		movenode = ht->array[index];
		while (ht != NULL)
		{
			printf("{'%s' : '%s',", (movenode->key), (movenode->value));
			movenode = movenode->next;
		}
		printf("\n");
	}
}
