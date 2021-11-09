#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/* funtion _string() */
int _printf(const char *format, ...);
void is_Naturally_Special_Character(const char *p, va_list list);
void is_Format_Specificator(const char *p, va_list list);
/*function 1_format_Specificator.c*/
void print_c(va_list list);
void print_s(va_list list);
void print_d(va_list list);
void print_i(va_list list);
/*putchar.c */
int _putchar(char c);
int _strlen(const char *s);
#endif
