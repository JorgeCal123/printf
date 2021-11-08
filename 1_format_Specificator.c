#include "main.h"


void print_c(__attribute__((unused))va_list list)
{
	printf("entra print c\n");
}


void print_s(va_list list)
{
	char *p;
	for(p = va_arg(list, char *); * p; p++)
		putchar(*p);
}


void print_d(__attribute__((unused))va_list list)
{
printf("entra print d\n");
}


void print_i(__attribute__((unused))va_list list)
{
printf("entra print i\n");
}


void print_f(__attribute__((unused))va_list list)
{
printf("entra print f\n");
}

