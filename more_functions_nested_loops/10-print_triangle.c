#include "main.h"
/**
* print_triangle - imprime un triangle de '#' selon la taille donnée
* @size: taille du triangle
*
* Description: Cette fonction affiche un triangle aligné à droite
* utilisant le caractère '#' et une taille spécifiée par l'utilisateur.
* Si size <= 0, la fonction affiche simplement une nouvelle ligne.
*/
void print_triangle(int size)
{
int m, l;

if (size <= 0)
{
_putchar('\n');
return;
}
for (m = 1; m <= size; m++)
{
for (l = 1; l <= size - m; l++)
_putchar(' ');

for (l = 1; l <= m; l++)
_putchar('#');
_putchar('\n');
}
}
