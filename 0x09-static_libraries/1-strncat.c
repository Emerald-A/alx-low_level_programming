#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncat - writes the character c to stdout
 * @dest: The character to print
 * @src: string
 * @n: number
 *
 * Return: On success 1.
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
