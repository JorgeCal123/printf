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
	int size = _strlen(format);

	va_start(list, format);
	for (p = format; *p; p++)
	{
		if (*p != '%')
			_putchar(*p);
		else
		{
			is_Naturally_Special_Character(p, list);
			p++;
		}
	}
	va_end(list);
	return (size);
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
}
/**
 * is_Format_Specificator - function that identifies me
 * if it is a format specifier and calls its function
 * @p: constant pointer type char that has the format
 * @list: parameters of main
 */

void is_Format_Specificator(const char *p, va_list list)
{
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
	}
}
