#include "main.h"
/**
 * _memcpy - copie une zone mémoire vers une autre
 * @dest: pointeur vers la zone de destination
 * @src: pointeur vers la zone source
 * @n: nombre d’octets à copier
 *
 * Return: un pointeur vers dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
