#ifndef HEADER_PRINTF_H
#define HEADER PRINTF_H
#include <stdarg.h>
int _printf(const char *format, ...);
void is_Naturally_Special_Character(va_list list);
void is_Format_Specificator(const char* p, va_list list);
void is_Alternately_Special_Characters(va_list list);
void is_Flag(va_list list);
#endif
