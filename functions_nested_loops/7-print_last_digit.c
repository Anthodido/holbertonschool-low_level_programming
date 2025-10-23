#include "main.h"
/**
 *print_last_digit - Affiche le dernier chiffre d'un nombre
 *@c: Un nombre au hasard
 *Return: lastdigit dernier chiffre zebi
 */
int print_last_digit(int c)
{
int last_digit;
last_digit = c % 10;

if (last_digit < 0)
last_digit = -last_digit;

_putchar (last_digit + '0');

return (last_digit);
}
