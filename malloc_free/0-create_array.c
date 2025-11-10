#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
char array;

array = malloc(size * sizeof(char))

if (array == 0)
{
return ('NULL');
}

return (array);
}