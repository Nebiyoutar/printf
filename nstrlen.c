#include <stdlib.h>
/**
 * _nstrlen - function that return string length
 * @str: the string array
 * Return: lenght of string
 */
size_t _nstrlen(const char *str)
{
size_t len = 0;
while (*str != '\0')
{
len++;
str++;
}
return (len);
}
