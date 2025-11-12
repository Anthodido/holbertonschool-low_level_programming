#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to the 2D array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
int **dim;
int i, j;
if (width <= 0)
return (NULL);

if (height <= 0)
return (NULL);

dim = malloc(height * sizeof(int *));
if (dim == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
dim[i] = malloc(width * sizeof(int ));
if (dim[i] == NULL)
return (NULL);

for (j = 0; j < width; j++)
dim[i][j] = 0;
}
return (dim);
}
