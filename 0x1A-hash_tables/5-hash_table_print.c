#include "hash_tables.h"
/**
* hash_table_print - function
* @ht: hash table to print
*
* Description: function to print a hash table
* Return: Nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *moveNode;
	unsigned long int index;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < (ht->size); index++)
	{
		moveNode = ht->array[index];
		while (moveNode != NULL)
		{
			printf("\'%s\': \'%s\'", (moveNode->key), (moveNode->value));
			printf(",");
			moveNode = moveNode->next;
		}
	}
	printf("}\n");
}
