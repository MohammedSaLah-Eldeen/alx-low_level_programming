#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*_atoi - function that convert a string to an integer.
*@s:pointer of caracter
*Return: integer
*/
int _atoi(char *s)
{
int sum = 0;
while (*s != 0)
{
sum = atoi(s + '0');
s++;
printf ("sum = %d\n", sum);
}
printf ("sum = %d\n", sum);


return (0);
}
