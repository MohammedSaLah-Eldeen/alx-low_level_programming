#include "main.h"
#include <string.h>

/**
*_strcpy - function that copies the string pointed to by src,
*including the terminating null byte (\0), to the buffer pointed to by dest.
*@dest:pointer of table
*@src:pointer
*Return: string
*/

char *_strcpy(char *dest, char *src)
{
int largest_index = strlen(src);
int i = 0;

for (; i <= largest_index; i++)
{
*(dest + i) = *(src + i);
}
*(dest + largest_index + 1) = '\0';

return (dest);
}
