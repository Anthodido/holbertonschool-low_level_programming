#include "main.h"
/**
 * more_numbers - rien
 *
 *
 */

void more_numbers(void)
{
char mlt, n;

for (mlt = '0'; mlt < 10; mlt++)
{
for (n = '0'; n <= 14; n++)
{
if (n > 9)
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
_putchar ('\n');
}
}
