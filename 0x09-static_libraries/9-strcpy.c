#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strcpy - writes the character c to stdout
 * @dest: The character to print
 * @src: the string
 *
 * Return: On success 1.
 */

char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
