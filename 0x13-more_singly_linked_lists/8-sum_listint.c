#include "lists.h"

/**
* sum_listint - a function that returns the sum of all the data (n)
*              of a list.
*
* @head: pointer to the first node of the list
*
* Return: the sum of all (n)
*/
int sum_listint(listint_t *head)
{
int result = 0;

while (head != NULL)
{
result += head->n;
head = head->next;
}
return (result);
}
