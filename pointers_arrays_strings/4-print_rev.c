#include "main.h"


void print_rev(char *s)

{
int f = 0;
int h;

while (s[f] != '\0')
f ++;

for (h = f - 1; h >= 0; h--)
_putchar (s[h]);

_putchar ('\n');

}