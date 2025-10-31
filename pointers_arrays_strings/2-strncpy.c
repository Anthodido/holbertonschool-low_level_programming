#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copies a string up to n bytes
 * @dest: destination buffer
 * @src: source string
 * @n: maximum number of bytes to copy
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)

{
int j = 0;

while(src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
		{
        	dest[j] = '\0';
        	j++;
    	}
return (dest);
}
