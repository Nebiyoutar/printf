#include "main.h"

/**
 * _reverse - reverse a string
 * @str: string to reverse
 * @length: length of string
 */
void _reverse(char *str, int length)
{
int start = 0;
int end = length - 1;
while (start < end)
{
char temp = str[start];
str[start] = str[end];
str[end] = temp;
start++;
end--
}
}

