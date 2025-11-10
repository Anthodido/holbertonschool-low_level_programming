#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *            which contains a copy of the string given as a parameter
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
char *antoine;
int len = 0;
unsigned int i = 0;

if (str == 0)
{
return (NULL);
}
while (str[len] != '\0')
{
len++;
}
antoine = malloc((len + 1) * sizeof(char));
if (antoine == 0)
{
return (NULL);
}

while (str[i] != '\0')
{
antoine[i] = str[i];
i++;
}
antoine[i] = '\0';
return (antoine);
}
