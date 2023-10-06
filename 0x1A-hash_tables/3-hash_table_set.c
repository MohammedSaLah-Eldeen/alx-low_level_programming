#include "hash_tables.h"

/**
 * make_hash_node - creates a new hash node
 * @key: key for the node
 * @value: for the node
 *
 * Return: the new node, or NULL on failure
 */
hash_node_t *create_new_node(const char *key, const char *value)
{
  hash_node_t *new_node = malloc(sizeof(hash_node_t));
  if (new_node == NULL)
    return (NULL);

  new_node->key = strdup(key);
  if (new_node->key == NULL)
    {
      free(new_node);
      return (NULL);
    }
  new_node->value = strdup(value):
  if (new_node->value == NULL)
    {
      free(new_node->key);
      free(new_node);
      return (NULL);
    }

  new_node->next = NULL;
  return (new_node);
}

/**
 * hash_table_set - sets a key to a value in the hash table
 * @ht: hash table to add elemt to
 * @key: key for the data
 * @value: data to store
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
  unsigned long int index;
  hash_node_t *new_node, *tmp;

  if (ht == NULL || ht->array == NULL || ht->size == 0 ||
      key == NULL || strlen(key) == 0 || value == NULL)
    return (0);

  index = key_index((const unsigned char *)key, ht->size);
  tmp = ht->array[index];
  while (tmp != NULL)
    {
      if (strcmp(tmp->key, key) == 0)
	{
	  nvalue = strdup(value);
	  if (nvalue == NULL)
	    return (0);
	  free(tmp->value);
	  tmp->value = nvalue;
	  return (1);
	}
      
      tmp = tmp->next;
    }
  new_node = create_new_node(key, value);
  if (new_node == NULL)
    return (0);

  new_node->next = ht->array[index];
  ht->array[index] = new_node;
  return (1);
}
