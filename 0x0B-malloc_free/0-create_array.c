#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars,
* and initializes it with a specific char.
* @size: the size of the array
* @c: initial value
*
* Return: a pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *parr;
if (size == 0)
{
return (NULL);
}

parr = (char *) malloc(size * sizeof(char));

if (parr == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
*(parr + i) = c;
}
return (parr);
}
