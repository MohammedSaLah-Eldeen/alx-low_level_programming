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
const listint_t *plist = h;

if (plist == NULL)
return (0);

while (plist != NULL)
{
printf("%d\n", plist->n);
nodes++;
plist = plist->next;
}
return (nodes);
}
