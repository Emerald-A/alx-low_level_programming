#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memcpy - writes the character c to stdout
 * @dest: The character to print
 * @src: string
 * @n: number
 *
 * Return: On success 1.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
