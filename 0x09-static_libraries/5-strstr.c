#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strstr - writes the character c to stdout
 * @haystack: The character to print
 * @needle: string
 *
 * Return: On success.
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
