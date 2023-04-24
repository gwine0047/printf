#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
int put_char(char a);

int put_int(int num);

int _printf(const char *format, ...);

int print_str(char *str);

double approx(int plc);

#endif
