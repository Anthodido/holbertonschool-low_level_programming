#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - affiche la somme des deux diagonales d'une matrice carrée
 * @a: pointeur vers la première case du tableau (matrice)
 * @size: taille de la matrice (nombre de lignes et colonnes)
 *
 * Return: rien
 */
void print_diagsums(int *a, int size)
{
int i = 0;
int sum1 = 0;
int sum2 = 0;

while (i < size)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - 1 - i)];
i++;
}
printf("%d, %d\n", sum1, sum2);
}
