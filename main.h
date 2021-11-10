#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>

/* funtion _string() */
int _printf(const char *format, ...);
void is_Naturally_Special_Character(const char *p, va_list list, int *size);
void is_Format_Specificator(const char *p, va_list list, int *size);
/*function 1_format_Specificator.c*/
int print_c(va_list list);
int print_s(va_list list);
int print_d(va_list list);
int print_i(va_list list);
/*putchar.c */
int _putchar(char c);
int _strlen(const char *s);
#endif
