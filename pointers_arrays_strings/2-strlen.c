#include "main.h"
/**
 * _strlen - retourne la longueur d'une chaîne de caractères
 * @s: pointeur vers la chaîne dont on veut connaître la longueur
 *
 * Description: Parcourt la chaîne pointée par @s jusqu'au caractère nul
 * ('\0') et compte le nombre de caractères présents.
 *
 * Return: la longueur de la chaîne (nombre de caractères avant '\0')
 */

int _strlen(char *s)
{
int len = 0;

while (s[len] != '\0')
len++;

return (len);

}
