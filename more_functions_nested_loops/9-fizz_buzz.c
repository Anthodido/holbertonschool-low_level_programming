#include "main.h"
#include <stdio.h>
/**
 * main - prints numbers from 1 to 100, followed by a new line.
 *        For multiples of three, prints "Fizz" instead of the number,
 *        for multiples of five, prints "Buzz",
 *        and for multiples of both three and five, prints "FizzBuzz".
 *
 * Return: Always 0 (Success)
 */

int main (void)

{
int n;
{
for (n = 1; n <= 100; n++)
putchar ('\n');
}
if (n % 3 == 0)
printf("Fizz");

if (n % 5 == 0)
printf("Buzz");

if (n % 5 == 0 && n % 3 == 0)
printf("FizzBuzz");

putchar (' ');
return (0);
}
