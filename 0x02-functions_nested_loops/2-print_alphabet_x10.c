#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10x
 */
void print_alphabet_x10(void)
{
	int a = 0;
	char ch;

	while (a < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
		_putchar(ch);
		ch++;
		}
	_putchar('\n');
	a++;
	}
}
