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
	unsigned long int index;

	if (ht == NULL)
		printf("{}\n");

	if (ht != NULL)
	{
		for (index = 0; index < (ht->size); index++)
		{
			if (ht->array[index] != NULL)
				printf("'%s' : '%s'}", (ht->array[index]->key), (ht->array[index]->value));
			else
				printf("{}\n");
		}
		printf("{'%s' : '%s',", (ht->array[index]->key), (ht->array[index]->value));
	}
}
