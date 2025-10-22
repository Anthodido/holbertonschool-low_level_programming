#include <stdio.h>
/**
*main - Entry point
*Return: 0 (Success)
*
*/

int main(void)
{
char lettre;
int num;
for (num = '0'; num <= '9'; num++)
putchar (num);
for (lettre = 'a'; lettre <= 'f'; lettre++)
putchar (lettre);

putchar ('\n');
return (0);

}
