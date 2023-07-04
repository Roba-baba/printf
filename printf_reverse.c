#include "main.h"

/**
 * printf_reverse - will print a reversed binary number.
 *
 * @args: a given number of args.
 *
 * @printed: the characters being printed.
 *
 * Return: always the characters printed.
 */

int printf_reverse(va_list args, int printed)
{
	char *str = va_arg(args, char *);
	int len = 0, i;

	while (str[len])
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		printed++;
	}

	return (printed);
}
