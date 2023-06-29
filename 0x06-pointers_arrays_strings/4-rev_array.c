#include "main.h"

/**
*reverse_array - function that compares two strings.
*@a: pointer caracter
*@n: integer
*Return: integer of pointer type
*/

void reverse_array(int *a, int n)
{
int i, temp;
for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
}
