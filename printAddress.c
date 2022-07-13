#include "main.h"
/**
 *printAddress - prints address
 *@l: arguments
 *@f: pointer to struct
 *
 *Return: number of printed chars
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
