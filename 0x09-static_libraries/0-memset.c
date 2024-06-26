#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * *_memset - fills memory with a constant byte.
 * @n: number of bytes.
 * @b: constant byte.
 * @s: pointer.
 *
 * Return: a pointer to memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
