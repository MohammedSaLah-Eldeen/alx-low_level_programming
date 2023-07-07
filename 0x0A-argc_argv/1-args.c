#include <stdio.h>

/**
* main - prints all arguments it receives.
* @argc: argument count
* @argv: arguments
*
* Return: 0
*/
int main(int argc, char *argv[])
{
(void)argv;

printf("%d\n", argc - 1);
return (0);
}
