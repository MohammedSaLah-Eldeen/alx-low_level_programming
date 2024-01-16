#include "search_algos.h"

/**
* linear_search - searches for a value in an array of
* integers using the Linear search algorithm
* @array: array to search the value in
* @size: size of the array
* @value: value to look for
*
* Return: the index of the found value,
* or -1 if not found
*/
int linear_search(int *array, size_t size, int value)
{
size_t idx;

if (array == NULL || size == 0)
return (-1);

for (idx = 0; idx < size; idx++)
{
printf("Value checked array[%lu] = [%d]", idx, array[idx]);
if (value == array[idx])
return (idx);
}
return (-1);
}
