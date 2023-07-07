#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers.
* @argc: argument count
* @argv: arguments
*
* Return: 0
*/
int main(int argc, char *argv[])
{
int n1, n2;
char *endptr1;
char *endptr2;
if (argc < 3)
{
printf("Error\n");
return (1);
}

n1 = strtol(argv[1], &endptr1, 10);
n2 = strtol(argv[2], &endptr2, 10);
if (*endptr1 != '\0' || *endptr2 != '\0')
{
printf("Error\n");
return (1);
}
printf("%d\n", n1 * n2);


return (0);
}
