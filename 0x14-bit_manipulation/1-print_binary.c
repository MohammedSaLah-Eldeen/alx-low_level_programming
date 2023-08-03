#include "main.h"

/**
* print_binary - prints the binary representation of a number
* @n: num of prented
* Return: void
*/
void print_binary(unsigned long int n)
{

unsigned long int n_reversed = 0;
while (n)
{
n_reversed <<= 1;
if (n & 1)
n_reversed += 1;

n >>= 1;
}

while (n_reversed)
{
if (n_reversed & 1)
_putchar('1');
else
_putchar('0');

n_reversed >>= 1;
}

}
