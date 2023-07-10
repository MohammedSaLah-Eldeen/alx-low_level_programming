#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers.
* @width: width of array
* @height: height of array
*
* Return: a pointer to a 2 dimensional array of integers.
*/
int **alloc_grid(int width, int height)
{
int **mat;
int i, j;
if (width <= 0 || height <= 0)
{
return (NULL);
}
mat = (int **) malloc(sizeof(int *) * height);
if (mat == NULL)
{
free(mat);
return (NULL);
}
for (i = 0; i < height; i++)
{
mat[i] = (int *) malloc(sizeof(int) * width);
if (mat[i] == NULL)
{
free(mat);
return (NULL);
}
}

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
mat[i][j] = 0;
}
}
return (mat);
}
