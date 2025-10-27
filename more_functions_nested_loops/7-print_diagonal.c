#include "main.h"
/**
 * print_diagonal - Dessine une ligne diagonale dans le terminal
 * @n: Le nombre de fois que le caractère '\' doit être imprimé
 *
 * Description: Si n est inférieur ou égal à 0, la fonction affiche
 * simplement un retour à la ligne. Sinon, elle affiche une diagonale
 * formée par le caractère'\' avec des espaces croissants avant chaque ligne.
 *
 * Return: Rien (void)
 */

void print_diagonal(int n)
{
int h, v;

if (n <= 0)
{
_putchar('\n');
return;
}
for (h = 0; h < n; h++)
{
for (v = 0; v < h; v++)
_putchar (' ');
_putchar ('\\');
_putchar ('\n');
}
}
