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
printf('\n');
}
if (n % 5 == 0 && n % 3 == 0)
printf("FizzBuzz");

else if (n % 3 == 0)
printf("Fizz");

else if (n % 5 == 0)
printf("Buzz");

else (n != 100)
printf(' ');


return (0);
}
