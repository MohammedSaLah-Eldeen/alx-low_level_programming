#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_strings - Prints strings passed to the function separed by separators
* @separator: A string that is used to separate strings
* @n: number of unnamed parameters
* Return: Always 0
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *txt;

if (separator == NULL)
separator = "";

va_start(args, n);

for (i = 0; i < n; i++)
{
txt = va_arg(args, char *);
if (txt == NULL)
txt = "(nil)";

if (i == n - 1)
printf("%s", txt);
else
printf("%s%s", txt, separator);
}

va_end(args);
printf("\n");
}
