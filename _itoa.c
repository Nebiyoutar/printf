#include "main.h"
/**
 * _itoa - convert integer to string
 * @buffer: buffer to store the result
 * @n: integer to convert
 * Return: the number of characters
 */
int _itoa(char *buffer, int n)
{
int i = 0;
int is_negative = 0;
if (n < 0)
{
is_negative = 1;
n = -n;
}
if (n == 0)
{
buffer[i++] = '0';
}
while (n != 0)
{
int digit = n % 10;
buffer[i++] = digit + '0';
n = n / 10;
}
if (is_negative)
{
buffer[i++] = '-';
}
_reverse(buffer, i);
return (i);
}

