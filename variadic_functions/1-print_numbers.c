#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to print between numbers
 * @n: number of integers passed to the function
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;

unsigned int i;
int numbers;

va_start(ap, n);
for (i = 0; i < n; i++)
{
numbers = va_arg(ap, int);
printf("%d", numbers);

if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(ap);
}
