#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "i t am th th biggest boy in nigeria";
    char *f = "th";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
