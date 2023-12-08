#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
int write_char(char c);
int write_string(char *str);
int write_percent();
int _printf(const char *format, ...);
size_t _nstrlen(const char *str);
#endif
