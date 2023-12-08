#include "main.h"
/**
 * write_int_dec - handle i and d conversion specifier
 * @n: integer to print
 * Return: number of character
 */
int write_int_dec(int n)
{
char buffer[12];
int count = 0;
count = _itoa(buffer, n);
if (count > 0)
{
count = write(1, buffer, count);
}
return (count);
}

