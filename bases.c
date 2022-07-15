#include "main.h"
/**
 *hexaPrint - prints a number in hexadecimal lowercase
 *@l: arguments
 *@f: pointer to struct
 *
 *Return: number of chars printed
 */
int hexaPrint(va_list l, indicators_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 1);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0x");
	count += _puts(str);
	return (count);
}

/**
 *hexaBig - prints number in hexadecimal uppercase
 *@l:arguments
 *@f: pointer to structs
 *
 *Return: the number of chars printed
 *
 */
int hexaBig(va_list l, indicators_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0X");
	count += _puts(str);
	return (count);
}

/**
 *terribletwos - prints a number in base 2
 *@l: arguments
 *@f: pointer to struct
 *
 *Return: number of char printed
 */
int terribletwos(va_list l, indicators_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 2, 0);

	(void)f;
	return (_puts(str));
}

/**
 *eightPrint - print number in base 8
 *@l: arguments
 *@f: pointer to struct
 *
 *Return: number of char printed
 */
int eightPrint(va_list l, indicators_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 8, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _putchar('0');
	count += _puts(str);
	return (count);
}
