#include <unistd.h>
/**
 * write_char - print character
 * @c: the character that is going to be printed
 * Return: return char 
 */
int write_char(char c)
{
return (write(1, &c, 1));
}
