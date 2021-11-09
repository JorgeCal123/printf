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
	unsigned int a, b, count;
	int n = va_arg(list, int);
		if (n < 0)
		{
			_putchar(45);
			a = n * -1;
		}
	else
	{
		a = n;
	}
	b = a;
	count = 1;
		while (b > 9)
		{
			b /= 10;
			count *= 10;
		}
		for (; count >= 1; count /= 10)
		{
			_putchar(((a / count) % 10) + 48);
		}
}

/**
 * print_i - function thar print a type integer
 * @list: parameter of main
 */
void print_i(va_list list)
{
	unsigned int a, b, count;
	int n = va_arg(list, int);
		if (n < 0)
		{
		_putchar(45);
		a = n * -1;
	}
	else
	{
		a = n;
	}
		b = a;
		count = 1;
			while (b > 9)
			{
				b /= 10;
				count *= 10;
			}
			for (; count >= 1; count /= 10)
			{
				_putchar(((a / count) % 10) + 48);
			}
}
