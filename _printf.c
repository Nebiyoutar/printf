#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format: format that input to function
 * Return: return as per format
 */
int _printf(const char *format, ...)
{
int count = 0;
va_list arg_lists;
va_start(arg_lists, format);
while (*format != '\0')
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
{
char c = (char) va_arg(arg_lists, int);
write(1, &c, 1);
count++;
break;
}
case 's':
{
const char *str = va_arg(arg_lists, const char*);
while (*str != '\0')
{
write(1, str, _nstrlen(str));
count += _nstrlen(str);
}
break;
}
case '%':
write(1, "%", 1);
count++;
break;
default:
write(2, "Error: uncompatible format specifier\n", 37);
return (-1);
break;
}
}
else
{
write(1, format, 1);
count++;
}
format++;
}
va_end(arg_lists);
return (count);
}
