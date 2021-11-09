#include "main.h"
/**
  * print_c - function thar print a type char
  * @list: parameter of main
  */
void print_c(va_list list)
{
	char p;

	p = va_arg(list, int);
	_putchar (p);
}
/**
  * print_s -function thar print a type String
  * @list: parameter of main
  */
void print_s(va_list list)
{
	char *p;

	for (p = va_arg(list, char *); *p; p++)
		_putchar(*p);
}
/**
 * print_d - function thar print a type double
 * @list: parameter of main
 */
void print_d(va_list list)
{
                int n = va_arg(list, int);
		                _putchar(n);
}

/**
 * print_i - function thar print a type integer
 * @list: parameter of main
 */
void print_i(va_list list)
{
	        int n = va_arg(list, int);
		_putchar(n);
}

/**
 * print_f - function thar print a type float
 * @list: parameter of main
 */
void print_f(__attribute__((unused))va_list list)
{
printf("entra print f\n");
}

