#include "main.h"
int check_prime(int n, int i);
/**
 * is_prime_number - vérifie si un nombre est premier
 * @n: nombre à tester
 * Return: 1 si premier, 0 sinon
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (check_prime(n, 2));
}

/**
 * check_prime - fonction récursive pour tester les diviseurs
 * @n: nombre à vérifier
 * @i: diviseur testé
 * Return: 1 si premier, 0 sinon
 */
int check_prime(int n, int i)
{
if (n % i == 0)
{
return (0);
}
else if (i * i > n)
{
return (1);
}
return (check_prime(n, i + 1));
}
