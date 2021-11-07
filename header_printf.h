#ifndef HEADER_PRINTF_H
#define HEADER PRINTF_H
#include <stdarg.h>
int _printf(const char *format, ...);
void is_Naturally_Special_Character(va_list list);
void is_format_Specificator(va_list list);
void is_alternately_Special_Characters(va_list list);
void is_flag(va_list list);
#endif
