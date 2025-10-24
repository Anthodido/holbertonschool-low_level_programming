#include "main.h"
/**
 *jack_bauer - montre chaque minutes de la journée
 *
 *Return: (success)
 */
 void times_table(void)
 {
int d, m, r;

for (d = 0; d <= 9; d++)
{
for (m = 0; m <= 9; m++)
{
r = d * m;

if (r < 10)
{
if (r != 0)
_putchar (' ');
_putchar (r + '0');
}

else
{
_putchar((r / 10) + '0');
_putchar((r % 10) + '0');
}

if (r != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
