#include "main.h"



void puts2(char *str)

int f = 0;
{
while (str[f] != '\0')
{
if (f % 2 != 0)
_putchar (str[f]);
}
_putchar ('\n');
}