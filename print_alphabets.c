#include "main.h"
/**
 *printStr - prints string
 *@1: arguments
 *@f: pointer to struct
 *
 *Return: number of printed chars
 */
int printStr(va_list 1, indicators_t *f)
{
	char *s = va_arg(1, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 *printC - prints character
 *@1: arguments
 *@f: pointer to struct
 *
 *Return: number of printed chars
 */
int printC(va_list 1, indicators_t *f)
{
	(void)f;
	_putchar(va_arg(1, int));
	return (1);
}
