#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at
 *                           a given position
 *
 * @head: pointer to the first node of the list
 * @idx: is the index of the list where the new node should be added
 * @n: element to add to the new node
 *
 * Return: NULL if anything fails or the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
  unsigned int nodes = 0, indexer;
  listint_t *plist = *head;
  listint_t *nnode;

  nnode = (listint_t *) malloc(sizeof(listint_t));
  if ((*head == NULL && idx != 0) || nnode == NULL)
    return (NULL);

  while (plist != NULL)
    {
      plist = plist->next;
      nodes++;
    }

  if (idx > nodes - 1)
    return (NULL);

  nnode->n = n;

  if (idx == 0)
    {
      nnode->next = *head;
      *head = nnode;
    }
  
  plist = *head;
  for (indexer = 0; indexer < idx - 1; indexer++)
    {
      plist = plist->next;
    }

  nnode->next = plist->next;
  plist->next = nnode;

  return (nnode);
}
