#include "main.h"
#include <string.h>

/**
 **_strncat - function that concatenates two strings.
 *@dest: pointer caracter
 *@src: pointer caracter
 *@n: integer
 *Return: @dest of pointer type
 */

char *_strncat(char *dest, char *src, int n)
{
int len_dest = strlen(dest);
int len_src = strlen(src);
int c;

for (c = 0; c <= len_src && c < n; c++)
{
*(dest + len_dest + c) = *(src + c);
}
return (dest);

}
