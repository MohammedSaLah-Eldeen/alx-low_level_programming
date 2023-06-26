#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*puts_half - function that prints half of a string, followed by a new line.
*@str: pointer Dereferencing at string.
*Return : @str
*/
void puts_half(char *str)
{
int length_of_the_string = strlen(str), n;

if (strlen(str) % 2 == 0)
n = length_of_the_string / 2;
else
{
n = (length_of_the_string - 1) / 2;
n++;
}

while (n <  length_of_the_string)
{
putchar(str[n]);
n++;
}
putchar('\n');
}
