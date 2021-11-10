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
	int size = 0;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(list, format);
	for (p = format; *p; p++)
	{
		if (*p != '%')
		{
			printf("entra\n");
			_putchar(*p);
			size++;
			continue;
		}
		else
		{
			printf("entra 2\n");
			is_Naturally_Special_Character(p, list, &size);
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
 * @size: pointer integer with size from porcentage
 */
void is_Naturally_Special_Character(const char *p, va_list list, int *size)
{
	if (*p == '%')
	{
		is_Format_Specificator(p, list, size);
	}
}
/**
 * is_Format_Specificator - function that identifies me
 * if it is a format specifier and calls its function
 * @p: constant pointer type char that has the format
 * @list: parameters of main
 * @size: pointer integer with size from porcentage
 */

void is_Format_Specificator(const char *p, va_list list, int *size)
{
	switch (*++p)
	{
		case 'c':
			*size += print_c(list);
			break;
		case 's':
			*size += print_s(list);
			break;
		case '%':
			_putchar('%');
			*size += 1;
			break;
		case 'd':
			*size += print_d(list);
			break;
		case 'i':
			*size += print_i(list);
			break;
	}
}
