#include <stdio.h>
#include <stdlib.h>


/**
* main - adds positive numbers.
* @argc: argument count
* @argv: arguments
*
* Return: 0
*/
int main(int argc, char **argv)
{
int i, n, sum = 0;
char *endptr;

if (argc < 2)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
n = strtol(argv[i], &endptr, 10);
if (*endptr != '\0')
{
printf("Error\n");
return (1);
}
sum += n;
}

printf("%d\n", sum);
return (0);
}
