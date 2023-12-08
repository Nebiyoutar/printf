#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format: format that input to function
 * Return: return as per format
 */
int _printf(const char *format, ...)
{
va_list lists;
va_start(lists, format);
int count = 0;
if (format == NULL)
return (-1);
while (*format != '\0')
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
count += write_char((char)va_arg(lists, int));
break;
case 's':
count += write_string(va_arg(lists, char*));
break;
case '%':
count += write_percent();
break;
default:
write(2, "Error: uncompatible format specifier\n", 37);
return (-1);
break;
}
}
else
{
count += write_char(*format);
}
format++;
}
va_end(lists);
return (count);
}
