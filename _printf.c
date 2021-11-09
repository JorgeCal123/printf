#include "main.h"
/**
 * _printf - description
 * @format: constant pointer type char that has the format
 * Return: return a integer
 */
int _printf(const char *format, ...)
{
	va_list list;
	const char *p;

	va_start(list, format);
	for (p = format; *p; p++)
	{
		is_Naturally_Special_Character(p, list);
	}
	va_end(list);
	return (0);
}
/**
 * is_Naturally_Special_Character - function that identifies me
 * if it is a special natural character
 * @p: constant pointer type char that has the format
 * @list: parameters of main
 */
void is_Naturally_Special_Character(const char *p, va_list list)
{
	if (*p == '%')
	{
		is_Format_Specificator(p, list);
	}
	else 
	{
	_putchar(*p);
	}
}
/**
 * is_Alternative_Special_Characters - function that identifies me
 * if it is an alternatively special character and call his function
 * @p: constant pointer type char that has the format
 */
void is_Alternative_Special_Characters(const char *p)
{
	switch (*++p)
	{
		case 'n':
			printf("entra");
			print_n();
			break;
		case 'f':
			print_f2();
			break;
		case '\"':
			_putchar('\"');
			break;
		case '\\':
			printf("entra al caso");
			_putchar('\\');
			break;
		case '\'':
			_putchar('\'');
			break;
		case '%':
			_putchar('%');
			break;
	}
}
/**
 * is_Format_Specificator - function that identifies me
 * if it is a format specifier and calls its function
 * @p: constant pointer type char that has the format
 * @list: parameters of main
 */

void is_Format_Specificator(const char *p, va_list list)
{
	is_Flag(p);
	switch (*++p)
	{
		case 'c':
			print_c(list);
			break;
		case 's':
			print_s(list);
			break;
		case '%':
			_putchar('%');
			break;
		case 'd':
			print_d(list);
			break;
		case 'i':
			print_i(list);
			break;
		case 'b':
			print_b(list);
			break;
		case 'u':
			print_u(list);
			break;
		case 'x':
			print_x(list);
			break;
		case 'X':
			print_X(list);
			break;
		case 'S':
			print_S(list);
			break;
		case 'p':
			print_p(list);
			break;
	}
}
/**
 * is_Flag - function that identifies me if it is a flag
 * and calls its function
 * @p: constant pointer type char that has the format
 */

void is_Flag(const char *p)
{
	switch (*p)
	{
		case '0':
			print_Zero();
			break;
		case '+':
			print_More();
			break;
		case '-':
			print_Less();
			break;
		case '#':
			print_Hash();
			break;
		case ' ':
			print_Space();
			break;
	}
}
