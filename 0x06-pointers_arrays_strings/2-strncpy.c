#include "main.h"
#include <string.h>

/**
 **_strncpy - function that copies a string.
 *@dest: pointer caracter
 *@src: pointer caracter
 *@n: integer
 *Return: @dest of pointer type
 */

char *_strncpy(char *dest, char *src, int n)
{
int largest_index = strlen(src);
int i = 0;

for (; i <= largest_index && i < n; i++)
{
*(dest + i) = *(src + i);
}
*(dest + largest_index + 1) = '\0';

return (dest);
}
