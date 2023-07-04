#include "main.h"

/**
 * printf_char - it prints a binary number.
 *
 * @args: this is the arguements to be used.
 *
 * @printed: the character being  printed.
 *
 * Return: always the printed characters.
 */

int printf_char(va_list args, int printed)
{
	int character = va_arg(args, int);

	_putchar(character);
	return (printed + 1);
}
