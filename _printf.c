#include "main.h"
/**
 * _printf - description
 * @format - constant pointer type char
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
void is_Naturally_Special_Character(const char *p, va_list list)
{
	switch (*++p)
	{
		case '%':
			is_Format_Specificator(p, list);
			putchar(*p);
			break;

		case '\\':
			is_Alternative_Special_Characters(p, list);
			break;
		

	}
}
void is_Alternative_Special_Characters(__attribute__((unused))const char *p,__attribute__((unused))va_list list)
{
	printf("backslash\n");
}

void is_Format_Specificator(const char *p, __attribute__((unused))va_list list)
{
	is_Flag(p);

	  switch(*++p)
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
		default:
			break;
            }
}


void is_Flag(const char *p)
{
	switch(*++p)
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
