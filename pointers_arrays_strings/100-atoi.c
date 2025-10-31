#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer safely
 * @s: string to convert
 *
 * Return: integer value (clamped to INT_MAX / INT_MIN if overflow)
 */
int _atoi(char *s)
{
int i = 0;
int sign = 1;
int num = 0;
int digit;
while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
else if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (num > (INT_MAX - digit) / 10)
{
if (sign == 1)
return (INT_MAX);
else
return (INT_MIN);
}
num = num * 10 + digit;
}
else if (num > 0)
break;
i++;
}
return (num *sign);
}

