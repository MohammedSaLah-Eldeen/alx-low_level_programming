#include "main.h"
#include <string.h>

/**
*rev_string - function that reverses a string.
*@s: table of caracter
*Return: Void
*/
void rev_string(char *s)
{
char *ps = s;

int largest_index = strlen(s) - 1;
int i = largest_index;

while (i >= ((largest_index + 1) / 2))
{
char vessel = *(s + i);
*(s + i) = *(ps + largest_index - i);
*(ps + largest_index - i) = vessel;
i--;
}
}
