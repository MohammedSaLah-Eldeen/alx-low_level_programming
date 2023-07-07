#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - adds positive numbers.
* @argc: argument count
* @argv: arguments
*
* Return: 0
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int res = 0;
int i;
int n;

if (argc == 1)
{
printf("%d\n", 0);
}
else
{
for (i = 1; i < argc; i++)
{
n = atoi(argv[i]);
if (n == 0 && *argv[i] != '0')
{
printf("Error\n");
return (1);
}
res += n;
}
printf("%d\n", res);
}
return (0);
}
