#include "main.h"
/**
 * _isalpha -  checks for lowercase character and return 1 or 0
 * @c:int
 * Return: 1 if c is a letter
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
