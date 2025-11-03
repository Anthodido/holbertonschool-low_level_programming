#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int h = 0;
int count = 0;
while (s[i] != '\0')
i++;
{
while (accept[h] != '\0')
h++;

if (accept[h] == s[i])
{
count++;
break;
}
if (accept[h] == '\0')
return (count);
}
return (count);
}