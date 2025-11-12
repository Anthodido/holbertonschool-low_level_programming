#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - Concatène deux chaînes de caractères.
 * @s1: Première chaîne.
 * @s2: Deuxième chaîne.
 * @n: Nombre de caractères de s2 à ajouter à la suite de s1.
 *
 * Description:
 * Cette fonction alloue dynamiquement un espace mémoire qui contient
 * la chaîne s1 suivie des n premiers caractères de s2, puis un caractère
 * de fin '\0'. Si n est supérieur ou égal à la longueur de s2, la fonction
 * utilise l’intégralité de s2. Si s1 ou s2 vaut NULL, elles sont traitées
 * comme des chaînes vides ("").
 *
 * Return:
 * Un pointeur vers la nouvelle chaîne allouée,
 * ou NULL si l’allocation échoue.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
char *ptr;

if (s1 == NULL) s1 = "";
if (s2 == NULL) s2 = "";

while(s1[len1] != '\0')
{
len1++;
}
while(s2[len2] != '\0')
{
len2++;
}
if (n >= len2)
n = len2;

ptr = malloc((len1 + n + 1) * sizeof(char));
if (ptr == NULL)
return (NULL);

for (i = 0; i < len1; i++)
{
ptr[i] = s1[i];
}
for (j = 0; j < n; j++)
{
ptr[len1 + j] = s2[j];
}
ptr[len1 + n] = '\0';
return (ptr);
}
