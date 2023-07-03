#include "main.h"
#include <string.h>

/**
**_strchr - function that locates a character in a string.
*@s: poiter of char type
*@c: caracter
*Return:  a pointer to the first occurrence of the character c in
* the string s, or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
int len = strlen(s);
int i;

for (i = 0; i < len; i++)
{
if (*(s + i) == c)
{
return ((s + i));
break;
}
}
return (NULL);
}
