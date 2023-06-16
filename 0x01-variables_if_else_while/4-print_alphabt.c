#include <stdio.h>

/**
 * main - runs code inside it.
 * Return: indication of successful output.
 */
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
if (!(a == 'e' || a == 'q'))
{
putchar(a);
}
}
putchar('\n');
return (0);
}
