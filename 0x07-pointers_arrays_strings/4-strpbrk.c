#include "main.h"
#include <string.h>

/**
**_strpbrk - function that searches a string for any of a set of bytes.
*@s: poiter of char type
*@accept: pointer of caracter type
*Return:  Returns the number of bytes in the initial segment of
*/

char *_strpbrk(char *s, char *accept)
{
char *p = strpbrk(s, accept);

return (p);
}
