#include "main.h"
/**
 * print_line - Dessine une ligne droite dans le terminal
 * @n: Le nombre de fois que le caractère '_' doit être imprimé
 *
 * Description: Si n est inférieur ou égal à 0, la fonction
 * n’affiche qu’un retour à la ligne. Sinon, elle affiche n
 * fois le caractère '_' suivi d’un retour à la ligne.
 *
 * Return: Rien (void)
 */

void print_line(int n)
{
int l;

if (n <= 0)
{
_putchar('\n');
return;
}
for (l = 0; l < n; l++)
_putchar ('_');
_putchar ('\n');
}
