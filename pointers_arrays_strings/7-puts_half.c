#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string to be printed
 *
 * Description: This function prints the second half of a string.
 * is odd, it prints the last (length - 1) / 2 characters.
 * It then prints a newline character at the end.
 */
void puts_half(char *str)

{
int a, f = 0;
while (str[f] != '\0')
f++;

if (f % 2 == 0)
a = f / 2;

else
a = (f + 1) / 2;

while (str[a] != '\0')
{
_putchar (str[a]);
a++;
}
_putchar ('\n');
}
