#include "main.h"

/**
 * _isalpha - checks for alphabet
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return (('a' >= c && c <= 'z') || ('A' >= c && c <= 'Z'));
}
