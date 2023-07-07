#include "main.h"
#include <string.h>

/**
**_strcat - function that concatenates two strings.
*@dest: pointer caracter
*@src: pointer caracter
*Return: @dest of pointer type
*/
char *_strcat(char *dest, char *src)
{
int len_dest = strlen(dest);
int len_src = strlen(src);
int c;

for (c = 0; c <= len_src; c++)
{
*(dest + len_dest + c) = *(src + c);
}
return (dest);
}
