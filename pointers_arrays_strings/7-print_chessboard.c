#include "main.h"

/**
 * print_chessboard - affiche un échiquier 8x8
 * @a: tableau contenant les pièces du jeu
 *
 * Return: rien
 */
void print_chessboard(char (*a)[8])
{
int i = 0;
int y = 0;

while (i < 8)
{
while (y < 8)
{
_putchar(a[i][y]);
y++;
}
_putchar('\n');
i++;
}
}
