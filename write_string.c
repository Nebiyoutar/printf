#include "main.h"
/**
 * write_string - print the string
 * @str: string passed to function
 * Return: ruturn string count
 */
int write_string(char *str)
{
int count = 0;
while (*str != '\n')
{
count += write_char(*str);
str++;
}
return (count);
}
