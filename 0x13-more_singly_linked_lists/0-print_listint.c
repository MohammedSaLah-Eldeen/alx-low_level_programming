#include "lists.h"

/**
* print_listint - prints all the elements of a linked list
* @h: linked list of type listint_t to print
*
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t nodes = 0;
const list_t *plist = h;

while (plist != NULL)
{
printf("%d\n", h->n);
nodes++;
plist = plist->next;
}
return (nodes);
}
