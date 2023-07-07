#include <stdio.h>
#include "main.h"
/**
*_puts - function that prints a string, followed by a new line, to stdout.
*@str: pointer Dereferencing at string.
*Return : @str
*/

void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str++);
}
putchar('\n');
}
