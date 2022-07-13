#include "main.h"
/**
 *hexaPrint - prints hexadecimal numbers (lowercase)
 *@1: arguments
 *@f: pointer to struct
 *
 *Return: number of printed chars
 */
int hexaPrint(va_list 1, indicators_t *f)
{
	unsigned int num = va_arg(1, unsigned int);
	char *str = convert(num, 16, 1);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0x");
	count += _puts(str);
	return (count);
}

/**
 *hexaBig - prints hexadecimal numbers (uppercase)
 *@1: arguments
 *@f: pointer to struct
 *
 *Return: number of printed chars
 */
int hexaBig(va_list 1, indicators_t *f)
{
	unsigned int num = va_arg(1, unsigned int);
	char *str = convert(num, 16, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0X");
	count += _puts(str);
	return (count);
}

/**
 *terribletwos - prints binary numbers
 *@1: arguments
 *@f: pointer to struct
 *
 *Return: number of printed chars
 */
int terribletwos(va_list 1, indicators_t *f)
{
	unsigned int num = va_arg(1, unsigned int);
	char *str = convert(num, 2, 0);

	(void)f;
	return (_puts(str));
}

/**
 *eightPrint - prints octal numbers
 *@1: arguments
 *@f: pointer to struct
 *
 *Return: number of printed chars
 */
int eightPrint(va_list 1, indicators_t *f)
{
	unsigned int num = va_arg(1, unsigned int);
	char *str = convert(num, 8, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _putchar('0');
	count += _puts(str);
	return (count);
}
