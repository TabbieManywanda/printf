#include "main.h"
/**
 *printStr - prints every character
 *@l: arguments
 *@f: pointer to struct
 *
 *Return: number of printed char
 */
int printStr(va_list l, indicators_t *f)
{
	char *s = va_arg(l, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 *printC - prints a char
 *@l: arguments
 *@f: pointer to struct
 *
 *Return: number of printed chars
 */
int printC(va_list l, indicators_t *f)
{
	(void)f;
	_putchar(va_arg(l, int));
	return (1);
}
