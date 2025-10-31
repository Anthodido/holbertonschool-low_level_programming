#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an integer array
 * @a: pointer to the array
 * @n: number of elements to print
 *
 * Description: Prints elements separated by ", " and ends with a newline.
 */
void print_array(int *a, int n)
{
int i;

if (n <= 0)
{
printf("\n");
return;
}

for (i = 0; i < n; i++)

{
if (i < n - 1)
printf("%d, ", a[i]);

else
printf("%d", a[i]);
}
printf("\n");
}
