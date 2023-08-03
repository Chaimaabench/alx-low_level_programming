#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - check if integer is a prime number
 * @n: integer
 * @n2: integer
 * Return: int
 */
int check_prime(int n, int n2);
int is_prime_number(int n)
{
return (check_prime(n, 2));
}

/**
 * check_prime - check all numbers of < n
 * @n: integer
 * @n2: integer
 * Return: int
 */

int check_prime(int n, int n2)
{
	if (n2 >= n && n > 1)
		return (1);
	else if (n % n2 == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, n2 + 1));
}
