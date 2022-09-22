#include "main.h"

/**
 * leet - function that encodes a string into leet
 * @str: string to be encoded
 * Return: returns the string str
 */
char *leet(char *str)
{
	int a, b;

	char *x = "AaEeOoTtLl";
	char *y = "4433007711";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; x[b] != '\0'; b++)
		{
			if (str[a] == x[b])
			{
				str[a] = y[b];
			}
		}
	}
	return (str);
}
