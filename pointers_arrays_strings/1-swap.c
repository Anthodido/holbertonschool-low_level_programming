#include "main.h"
/**
 * swap_int - échange les valeurs de deux entiers
 * @a: pointeur vers le premier entier
 * @b: pointeur vers le deuxième entier
 *
 * Description: Cette fonction prend deux pointeurs vers des entiers et
 * échange leurs valeurs en utilisant une variable temporaire.
 */
 
void swap_int(int *a, int *b)

{
int x;

x = *a;
*a = *b;
*b = x

return;
}
