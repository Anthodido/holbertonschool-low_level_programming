#include <unistd.h>

/**
 * _putchar - écrit un caractère sur la sortie standard
 * @c: caractère à afficher
 *
 * Return: 1 (succès), ou -1 (erreur)
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}