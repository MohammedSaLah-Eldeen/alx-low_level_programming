#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* string_nconcat - a function that concatenates two strings.
*
* @s1: first char
* @s2: secound char
* @n: unsigned int
*
* Return: If the function fails, it should return NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *cstr;
unsigned int len_s2;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

len_s2 = strlen(s2);
if (n >= len_s2)
{
cstr = (char *) malloc(strlen(s1) + strlen(s2) + 1);
}
else
{
cstr = (char *) malloc(strlen(s1) + n + 1);
}

if (cstr == NULL)
{
return (NULL);
}

strcpy(cstr, s1);
if (n >= len_s2)
{

strcat(cstr, s2);
}
else
{
strncat(cstr, s2, n);
}

return (cstr);
}
