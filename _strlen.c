#include "main.h"
/**
 * _strllen - function
 *@s: char pointer
 *Return: int
 * **/
int _strlen(const char *s)
{
	int c = 0;
		while (*(s + c) != '\0')
		c++;
		{
			return (c);
		}
}
