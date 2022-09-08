#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character;
	int integer;
	long longx;
	long long longlongx;
	float floatx;
	
	printf("Size of a char: %lu byte(s)\n", sizeof(character));
	printf("Size of an int: %lu byte(s)\n", sizeof(integer));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longx));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(longlongx));
	printf("Size of a float: %lu byte(s)\n", sizeof(floatx));
	return (0);
}
