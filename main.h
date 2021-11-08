#ifndef HEADER_PRINTF_H
#define HEADER PRINTF_H
#include <stdarg.h>
int _printf(const char *format, ...);
void is_Naturally_Special_Character(const char *p, va_list list);
void is_Format_Specificator(const char* p, va_list list);
void is_Alternative_Special_Characters(const char *p, va_list list);
void is_Flag(va_list list);
#endif
