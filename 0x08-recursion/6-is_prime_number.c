#include "main.h"

/**
 * _chkprime - checks if an integer is a prime number
 * @x: integer input
 * @y: first divisor
 * Return: returns 1 if x is a prime number and 0 otherwise
 */
int _chkprime(int x, int y)
{
	if (y > (x / 2))
		return (1);
	if (x % y == 0)
		return (0);
	return (_chkprime(x, y + 1));
}
/**
 * is_prime_number - checks if an integer is a prime number
 * @n: integer input
 * Return: returns 1 if the input integer is a prime number,
 * otherwise return 0
 */
int is_prime_number(int n)
{
	if (n < 0 || n == 0 || n == 1)
		return (0);
	return (_chkprime(n, 2));
}
