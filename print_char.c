#include "main.h"

/**
 * print_char - imprime le caractère
 * Description: imprime le caractère
 * @c: caractère à afficher
*/
void print_char(va_list format)
{
	char c = va_arg(format, char);

	_putchar(c);
}
