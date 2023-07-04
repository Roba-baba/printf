#include "main.h"

/**
 * printf_string - is a prints string.
 *
 * @args: is a given number of arguements.
 *
 * @printed: the characters being printed.
 *
 * Return: alays the printed charcaters.
 */

int printf_string(va_list args, int printed)
{
	char *string = va_arg(args, char *);

	while (*string != '\0')
	{
		_putchar(*string);
		printed++;
		string++;
	}
	return (printed);
}
