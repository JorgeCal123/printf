#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/* funtion _string() */
int _printf(const char *format, ...);
void is_Naturally_Special_Character(const char *p, va_list list);
void is_Format_Specificator(const char *p, va_list list);
void is_Alternative_Special_Characters(const char *p);
void is_Flag(const char *p);
/*function 1_format_Specificator.c*/
void print_c(va_list list);
void print_s(va_list list);
void print_d(va_list list);
void print_i(va_list list);
void print_f(va_list list);
/* Alternative_Special_characters.c */
void print_n(void);
void print_f2(void);

/*function 2_format_Specificator.c*/
void print_b(va_list list);
void print_u(va_list list);
void print_x(va_list list);
void print_X(va_list list);
void print_S(va_list list);

/*function 3_format_Specificator.c*/
void print_p(va_list list);

/*flags.c*/
void print_Zero(void);
void print_More(void);
void print_Less(void);
void print_Hash(void);
void print_Space(void);

/*putchar.c */
int _putchar(char c);
int _strlen(const char *s); /*function to count lenght*/

#endif
