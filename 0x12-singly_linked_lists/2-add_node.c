#include "lists.h"

/**
* add_node - add a new node at beginning of a list_t list.
* @head: head of a list_t list.
* @str: value to insert into element.
* Return: the number of nodes.
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *next_node = *head;
*head = malloc(sizeof(list_t));
if (*head == NULL)
return (NULL);
(*head)->str = strdup(str);
(*head)->len = strlen(str);
(*head)->next = next_node;

return (*head);
}
