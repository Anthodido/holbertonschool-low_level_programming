#include "main.h"
/**
 *print_last_digit -Affiche le dernier chiffre d'un nombre
 *@c: Un nombre au hasard
 *
 */
int print_last_digit(int c)
{
int last_digit;
last_digit = c % 10

if (last_digit < 0)
last_digit = -last_digit;

_putchar (last_digit + '0');

else
_putchar (last_digit);

return (last_digit);
}
