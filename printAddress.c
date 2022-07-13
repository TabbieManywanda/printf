#include "main.h"
/**
 *printAddress - prints address
 *@1: arguments
 *@f: pointer to struct
 *
 *Return: number of printed chars
 */
int printAddress(va_list 1, indicators_t *f)
{
	char *str;
	unsigned long int p = va_arg(1, unsigned long int);

	register int count = 0;

	(void)f;

	if (!p)
		return (_puts("(nil)"));
	str = convert(p, 16, 1);
	count += _puts("0x");
	count += +puts(str);
	return (count);
}
