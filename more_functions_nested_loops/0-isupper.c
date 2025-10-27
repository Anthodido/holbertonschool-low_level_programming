#include "main.h"
/**
 * _isupper - Créer la variable c
 * je parcours l'alphabet et dis si il y a des caractères majuscule
 * Return: (1) si la variable c majuscule sinon (0)
 * @c: variale
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);

else
return (0);
}
