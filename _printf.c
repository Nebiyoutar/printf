#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format: format that input to function
 * Return: return as per format
 */
int _printf(const char *format, ...)
{
va_list arg_lists;
va_start(arg_lists, format);
int count = 0;
while (*format)
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
{
char c = (char) va_arg(arg_lists, int);
write(1, &c, 1)
count++;
break;
}
case 's':
{
const char *str = va_arg(arg_lists, const char*)
write(1, str, _nstrlen(str));
count += _nstrlen(str);
break;
}
case '%':
write(1, "%", 1);
count++
break;
default:
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
