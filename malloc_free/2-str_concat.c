#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space with s1 + s2, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
unsigned int i = 0, j = 0, k = 0, len1 = 0, len2 = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
{
len1++;
}
while (s2[len2] != '\0')
{
len2++;
}

concat = malloc((len1 + len2 + 1) * sizeof(char));
if (concat == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
concat[k] = s1[i];
k++;
}
for (j = 0; s2[j] != '\0'; j++)
{
concat[k] = s2[j];
k++;
}

concat[k] = '\0';
return (concat);
}
