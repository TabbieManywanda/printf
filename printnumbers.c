#include "main.h"
/**
 *printInteger - prints integer
 *@l: arguments
 *@f: pointer to struct
 *
 *Return: number of printed chars
 */
int printInteger(va_list l, indicators_t *f)
{
	int n = va_arg(l, int);
	int res = count_digit(n);

	if (f->space == 1 && f->plus == 0 && n >= 0)
		res += _putchar(' ');
	if (f->plus == 1 && n >= 0)
		res += _putchar('+');
	if (n <= 0)
		res++;
	print_number(n);
	return (res);
}

/**
 *unsignPrint - prints unsigned integer
 *@l: arguments
 *@f: pointer to struct
 *
 *Return: number of printed char
 */
int unsignPrint(va_list l, indicators_t *f)
{
	unsigned int u = va_arg(l, unsigned int);
	char *str = convert(u, 10, 0);

	(void)f;
	return (_puts(str));
}

/**
 *printNum - prints all digits
 *@n: integer to be printed
 *
 *Return: void
 */
void printNum(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
		n1 = n;

	if (n1 / 10)
		print_number(n1 / 10);
	_putchar((n1 % 10) + '0');
}

/**
 *counter - returns number of digits in an integer
 *@i: integer to evaluate
 *
 *Return: number of digits
 */
int counter(int i)
{
	unsigned int d = 0;
	unsigned int u;

	if (i < 0)
		u = i * -1;
	else
		u = i;
	while (u != 0)
	{
		u /= 10;
		d++;
	}
	return (d);
}
