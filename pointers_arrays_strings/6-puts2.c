#include "main.h"
/**
 * puts2 - Prints every other character of a string, starting with the first
 * @str: Pointer to the string to print
 *
 * Description: This function prints one character out of two from the string,
 * starting with the first character, followed by a new line.
 * Return: Nothing (void)
 */
void puts2(char *str)
{
int f = 0;

while (str[f] != '\0')
{
if (f % 2 == 0)
_putchar (str[f]);
f++;
}
_putchar('\n');
}
