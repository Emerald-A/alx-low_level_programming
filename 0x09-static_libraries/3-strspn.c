#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strspn - writes the character c to stdout
 * @s: The character to print
 * @accept: string
 *
 * Return: On success 1.
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
