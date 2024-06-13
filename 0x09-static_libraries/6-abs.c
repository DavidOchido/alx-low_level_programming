#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* _abs - compute the absolute value.
*
* @n: to be checked
* Return: Always 0.
*/
int _abs(int n)
{
if (n < 0)
{
n = (-1) * n;
}
return (n);
}
