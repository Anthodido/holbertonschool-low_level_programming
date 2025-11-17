#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name using a function pointer
 * @name: name to print
 * @f: pointer to a function that takes a char * and returns void
 */
void print_name(char *name, void (*f)(char *))
{

if (f == NULL || name == NULL)
return;

f(name);
}
