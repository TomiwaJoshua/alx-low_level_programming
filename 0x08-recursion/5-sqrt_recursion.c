#include "main.h"

/**
 * _mysqrt - calculates square root using repeated subtraction method
 * @x: the number whose square root is to be found
 * @y: the required prime number
 * @z: the iteration number
 * Return: returns the square root of x
 */
int _mysqrt(int x, int y, int z)
{
	if (x < 0)
		return (-1);
	else if (x == 0)
		return (z);

	x = x - y;
	y += 2;
	z += 1;
	return (_mysqrt(x, y, z));
}
/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: given number
 * Return: square root of n, or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	if (n < 0)
		return (-1);
	return (_mysqrt(n, 1, 0));
}
