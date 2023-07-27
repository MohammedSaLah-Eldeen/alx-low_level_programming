#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* print_list - check the code for Holberton School students.
* @h: name of the list
* Return: the number of nodes.
*/
size_t print_list(const list_t *h)
{
size_t nodes = 0;
const list_t *plist = h;

while (plist != NULL)
{
if (plist->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", plist->len, plist->str);
}
nodes++;
plist = plist->next;
}
return (nodes);
}
