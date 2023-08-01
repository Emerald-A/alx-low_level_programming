#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memset - writes the character c to stdout
 * @s: The character to print
 * @b: string
 * @n: number
 *
 * Return: On success 1.
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
