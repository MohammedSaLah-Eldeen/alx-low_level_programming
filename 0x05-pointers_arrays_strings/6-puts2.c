#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*puts2 - function that prints every other character of a string,
* starting with the first character, followed by a new line.
*@str: pointer Dereferencing at string.
*Return : @str
*/
void puts2(char *str)
{
int largest_index = strlen(str) - 1;
int i;

for (i = 0; i <= largest_index; i++)
{
if (i % 2 == 0)
{
putchar(*(str + i));
}
}
putchar('\n');
}
