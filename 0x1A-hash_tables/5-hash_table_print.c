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
/*har *value;*/
	/*char *key;*/

	if (ht == NULL)
		printf("{}\n");

	if (ht != NULL)
	{
		for (index = 0; index < (ht->size); index++)
			printf("Inside for loop\n");
		/*rintf("{'%s' :,", value);*/
	}
}
