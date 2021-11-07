#include "main.h"
#include <stdio.h>
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
	/*is_Naturally_Special_Characters(list);*/
		if(*p == '%')
            {
		    printf("iporcentaje\n");
		    is_Format_Specificator(p, list);
                putchar(*p);
                continue;
            }

	}
	va_end(list);
	return (0);
}

void is_Format_Specificator(__attribute__((unused))const char *p, va_list list)
{
	is_Flag(list);

	printf("funcion ormato\n");


}


void is_Flag(__attribute__((unused))va_list list)
{
	printf("entra flag\n");
}
