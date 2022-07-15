#include "main.h"
/**
 *printAddress - prints address of input in hexa format
 *@l: arguments
 *@f: pointer to struct
 *
 *Return: number of char printed
 */
int printAddress(va_list l, indicators_t *f)
{
	char *str;
	unsigned long int p = va_arg(l, unsigned long int);

	register int count = 0;

	(void)f;

	if (!p)
		return (_puts("(nil)"));
	str = convert(p, 16, 1);
	count += _puts("0x");
	count += _puts(str);
	return (count);
}