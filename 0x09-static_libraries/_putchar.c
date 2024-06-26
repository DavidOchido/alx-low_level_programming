#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On sucess 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int  _putchar(char c)
{
	return (write(1, &c, 1));
}
