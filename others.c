#include "main.h"
/**
 *capitalsPrint - non printable characters
 *@l: arguments
 *@f: pointer to struct
 *
 * Return: number of printed chars
 */
int capitalsPrint(va_list l, indicators_t *f)
{
	int i, count = 0;
	char *res;
	char *s = va_arg(l, char *);

	(void)f;
	if (!s)
		return (_puts("(null)"));

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			_puts("\\x");
			count += 2;
			res = convert(s[i], 16, 0);
			count += _puts(res);
		}
		else
			count += _putchar(s[i]);
	}
	return (count);
}

/**
 *percentage - prints percent
 *@l: arguments
 *@f: pointer to struct
 *
 * Return: number of printed chars
 */
int percentage(va_list l, indicators_t *f)
{
	(void)l;
	(void)f;
	return (_putchar('%'));
}

/**
 *revPrint - prints string in reverse
 *@l: arguments
 *@f: pointer to struct
 *
 * Return: length of printed string
 */
int revPrint(va_list l, indicators_t *f)
{
	int i = 0, j;
	char *s = va_arg(l, char *);

	(void)f;
	if (!s)
		s = "(null)";

	while (s[i])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	return (i);
}

/**
 *rot13Print - prints string using rot13
 *@l: arguments
 *@f: pointer to struct
 *
 *Return: length of printed string
 */
int rot13Print(va_list l, indicators_t *f)
{
	int i, j;
	char normal[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(l, char *);

	(void)f;
	for (j = 0; s[j]; j++)
	{
		if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
			_putchar(s[j]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (s[j] == normal[i])
					_putchar(rot13[i]);
			}
		}
	}
	return (j);
}
