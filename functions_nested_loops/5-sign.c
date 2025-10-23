#include "main.h"
/**
 *print_sign -vérifie le signe du nombre
 *@n: est le caraactère à vérifier
 *Return: soit + soit - soit 0
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}
else if (n == 0)
{
_putchar (0);
return (0);
}
else
{
_putchar ('-');
return (-1);
}
}
