#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
int write_char(char c);
int write_string(char *str);
int write_percent(void);
int _printf(const char *format, ...);
size_t _nstrlen(const char *str);
void _reverse(char *str, int length);
int _itoa(char *buffer, int n);
int write_int_dec(int n);
#endif
