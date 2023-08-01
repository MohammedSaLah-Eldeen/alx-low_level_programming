#include "lists.h"

/**
* pop_listint - deletes head of the node
*
* @head: pointer to the first node in the list
*
* Return: the head's node's data (n)
*/
int pop_listint(listint_t **head)
{
int restored;
listint_t* new_head;

if (*head == NULL || head == NULL)
return (0);

restored = (*head)->n;
new_head = (*head)->next;

free(*head);
*head = new_head;

return (restored);

}
