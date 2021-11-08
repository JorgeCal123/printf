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
		printf("iporcentaje\n");
		is_Format_Specificator(p, list);
		putchar(*p);
		break;
		case '\\':
		printf("funciona back\n");
		is_Alternative_Special_Characters(p, list);
		break;
	

	}
}
void is_Alternative_Special_Characters(__attribute__((unused))const char *p,__attribute__((unused))va_list list)
{
	printf("backslash\n");
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
