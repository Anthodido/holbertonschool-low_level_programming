#include "main.h"
/**
 *_isalpha -Verifie si le caractere est en minuscule ou en majuscule
 *@c: est le caractère à vérifier
 *Return: 1 if it's  lowercase else 0
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);

else
return (0);
}
