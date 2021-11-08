#ifndef HEADER_PRINTF_H
#define HEADER_PRINTF_H
#include <stdarg.h>
#include <stdio.h>
/* funtion _string() */
int _printf(const char *format, ...);
void is_Naturally_Special_Character(const char *p, va_list list);
void is_Format_Specificator(const char *p, va_list list);
void is_Alternative_Special_Characters(const char *p, va_list list);
void is_Flag(va_list list);
/*function 1_format_Specificator.c*/
void print_c(va_list list);
void print_s(va_list list);
void print_d(va_list list);
void print_i(va_list list);
void print_f(va_list list);

/*function 2_format_Specificator.c*/
void print_b(va_list list);
void print_u(va_list list);
void print_x(va_list list);
void print_X(va_list list);
void print_S(va_list list);

/*function 3_format_Specificator.c*/
void print_p(va_list list);

/*putchar.c */
int _putchar(char c);

#endif
