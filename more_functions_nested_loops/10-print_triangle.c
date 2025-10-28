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
int L, l;

if (size <= 0)
{
_putchar ('\n');
return;
}
for (L = 1; L <= size; L++)
{
for (l = 1; l <= size - L; l++)
_putchar(' ');

for (l = 1; l <= L; l++)
_putchar('#');
_putchar('\n');
}
}
