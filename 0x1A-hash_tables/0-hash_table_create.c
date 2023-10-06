#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
  hash_table_t *ht = malloc(sizeof(hash_table_t));
  unsigned long int i;
  
  if (ht == NULL)
    return (NULL);

  ht->size = size;
  ht->array = malloc(sizeof(hash_node_t *) * size);
  if (ht->array == NULL)
    {
      free(hash_table);
      return (NULL);
    }
  for (i = 0; i < size; i++)
      ht->array[i] = NULL;
  
  return (ht);
}
