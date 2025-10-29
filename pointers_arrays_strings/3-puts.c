#include "main.h"
/**
 * _puts - affiche une chaîne de caractères suivie d'une nouvelle ligne
 * @str: pointeur vers la chaîne à afficher
 *
 * Description: Parcourt la chaîne pointée par @str et affiche
 * chaque caractère à l'aide de la fonction _putchar,
 * puis affiche un saut de ligne à la fin.
 */

void _puts(char *str)
{
int len = 0;

while (str[len] != '\0')
len++;

_putchar (str[len]);
_putchar ('\n');

}
