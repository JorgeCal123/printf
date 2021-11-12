#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0
 *
 *
 *
     */

int main(void)
{
	int len, len2;

	len = _printf("%K\n");
	len2 = printf("%K\n");
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}

	return (0);
}




/*
int main(void)
{
	int len, len2;

	len = _printf("%s", "This sentence is retrieved from va_args!\n");
	len2 = printf("%s", "This sentence is retrieved from va_args!\n");
	printf("%d = %d", len, len2);
	
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}

int main(void)
{

	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	

	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");

	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	
	return (0);
}
*/
