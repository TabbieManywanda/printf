#include "main.h"
/**
 *_printf - produces output according to a format
 *@format: character string
 *
 *Return: number of characters printed upon success
 *-1 otherwise
 */
int _printf(const char *format, ...)
{
	int (*fxnptr)(va_list, flags_t *);
	const char *str;
	va_list args;
	indicators_t indicators = {0, 0, 0};

	register int count = 0;

	va_start(args, format);
	if (!format || (format[0] == '%' && ! format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (str = format; *str; str++)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (get_indicator(*str, &indicators))
				str++;
			fxnptr = get_print(*str);
			count += (fxnptr)
				?fxnptr(args, &indicators)
				:_printf("%%%c", *str);
		}
		else
			count += _putchar(*str);
	}
	_putchar(-1);
	va_end(args);
	return (count);
}
