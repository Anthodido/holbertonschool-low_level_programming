#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: the size of the array
 * @c: the character used to initialize the array
 *
 * Return: pointer to the array, or NULL if it fails or if size = 0
 */
char *create_array(unsigned int size, char c)
{
char *array;

unsigned int i = 0;

if (size == 0)
{
return (NULL);
}

array = malloc(size * sizeof(char));

if (array == 0)
{
return (NULL);
}
while (i < size)
{
array[i] = c;
i++;
}
return (array);
}
