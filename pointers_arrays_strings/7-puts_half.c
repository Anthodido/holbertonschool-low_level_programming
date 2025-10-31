#include "main.h"

void puts_half(char *str)

{
int a, f = 0;
while (str[f] != '\0')
f++;

if (f % 2 == 0)
a = f / 2;

else
a = (f + 1) / 2;

while (str[a] != '\0')
{
_putchar (str[a]);
a++;
}
_putchar ('\n');
}
