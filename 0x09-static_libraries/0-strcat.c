#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strcat - writes the character c to stdout
 * @dest: The character to print
 * @src: the string
 *
 * Return: On success 1.
 */

char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
