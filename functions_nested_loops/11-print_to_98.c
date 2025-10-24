#include "main.h"
#include <stdio.h>
/**
*print_to_98 - Ecris les nombres de n à 98
*@n : la variable qui va débuter
*
*/
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
printf("%d", n);
if (n != 98)
printf(", ");
}
}
else
{
for (; n >= 98; n--)
{
printf("%d", n);
if (n != 98)
printf(", ");
}
}
printf("\n");
}
