#include "main.h"
#include <stddef.h>
#include <string.h>

/**
* _strstr - function that locates a substring.
* @haystack: first string.
* @needle: string to find.
* Return: a pointer to the beginning of the located substring, or NULL
* if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
int len_haystack = strlen(haystack);
int len_needle = strlen(needle);
int c, i;
for (c = 0; c <= len_haystack - len_needle; c++)
{
for (i = 0; i < len_needle; i++)
{
if (*(haystack + i + c) != *(needle + i))
{
break;
}
else if (i == len_needle - 1)
{
return (haystack + c);
}
}
}
return (NULL);
}
