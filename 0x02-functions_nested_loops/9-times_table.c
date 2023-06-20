#include "main.h"

/**
 *times_table - function that prints the 9 times table, starting with 0.
 *
 *Return: Nothing
 */
void times_table(void)
{
int i, j, v;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
v = i * j;
if (v > 9)
{
_putchar(v / 10 + '0');
_putchar(v % 10 + '0');
}
else if (j != 0)
{
_putchar(' ');
_putchar(i * j + '0');
}
else
{
_putchar(i * j + '0');
}
if (j != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
