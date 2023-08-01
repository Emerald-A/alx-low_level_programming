#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isupper - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 */

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
