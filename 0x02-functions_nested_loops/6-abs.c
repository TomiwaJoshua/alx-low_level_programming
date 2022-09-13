#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 * @n: integer inputed
 * Return: returns the absolute value of the integer
 */
int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}
