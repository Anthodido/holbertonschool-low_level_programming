#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 *
 */

int main(void)
{
char alphaa;
char alphaA;
for (alphaa = 'a'; alphaa <= 'z'; alphaa++)
for (alphaA = 'A'; alphaA <= 'Z'; alphaA++)
putchar(alphaa);
putchar(alphaA);
putchar('\n');

return (0);
}
