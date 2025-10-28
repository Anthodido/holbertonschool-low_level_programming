#include "main.h"
/**
 * print_square - Affiche un carré composé du caractère '#'
 * @size: La taille (hauteur et largeur) du carré
 *
 * Description:
 * Cette fonction affiche un carré de taille donnée en utilisant
 * le caractère '#'. Si la taille est inférieure ou égale à 0,
 * la fonction affiche simplement un saut de ligne.
 *
 * Return: Rien (void)
 */

void print_square(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
_putchar ('#');
_putchar ('\n');
}
}
