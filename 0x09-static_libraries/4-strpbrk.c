#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strpbrk - writes the character c to stdout
 * @s: The character to print
 * @accept: string
 *
 * Return: On success.
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
