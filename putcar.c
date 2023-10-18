#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The printed output
 *
 * Return: On success 1.
 * On error, -1 is returned and on suucess it prints ()
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
