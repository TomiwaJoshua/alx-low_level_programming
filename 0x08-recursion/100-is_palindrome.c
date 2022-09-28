#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s: string input
 * Return: returns the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}

	return (_strlen_recursion(s + 1) + 1);
}
/**
 * _palchk - checks if a string is a palindrome
 * @x: string input
 * @y: string input reversed
 * Return: returns 1 if string is a palindrome and 0 otherwise
 */
int _palchk(char *x, int y)
{
	if (*x == '\0')
		return (1);
	y -= 1;

	if (*x == *(x + y))
		return (_palchk(x + 1, y - 1));
	else
	return (0);	
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string input
 * Return: returns 1 if string is a palindrome and 0 otherwise
 */
int is_palindrome(char *s)
{
	return (_palchk(s, _strlen_recursion(s)));
}
