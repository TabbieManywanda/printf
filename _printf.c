#include "main.h"
/**
 *_printf - produces output according to format
 *@format: string containing characters and specifiers
 *
 *Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int (*pfunc)(va_list, indicators_t *);
	const char *p;
	va_list args;
	indicators_t indicators = {0, 0, 0};

	register int count = 0;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (get_indicator(*p, &indicators))
				p++;
			pfunc = get_print(*p);
			count += (pfunc)
				? pfunc(args, &indicators)
				: _printf("%%%c", *p);
		}
		else
			count += _putchar(*p);
	}
	_putchar(-1);
	va_end(args);
	return (count);
}
