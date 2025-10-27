#include"main.h"
/**
 * print_most_numbers - rien
 *
 *
 */

void print_most_numbers(void)
{
char exc;
for (exc = '0'; exc <= '9'; exc++)

if (exc != '2' && exc != '4')
_putchar (exc);
_putchar ('\n');
}
