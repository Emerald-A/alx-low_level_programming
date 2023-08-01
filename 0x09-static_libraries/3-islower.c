#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _islower - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
