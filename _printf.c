#include "main.h"

/**
 * _printf - this will implement printf.
 *
 * @format: specifies the format.
 *
 * Return: the string that has been formated.
 */

int _printf(const char *format, ...)
{
	int printed = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			printed = selector(format, args, printed);
			format++;
		}
		else
		{
			_putchar(*format);
			printed++;
			format++;
		}
	}
	va_end(args);
	return (printed);
}
