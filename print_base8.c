#include "main.h"

/**
 * print_base8 - Print a unsigned base8 stuc
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int print_base8(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, unsigned int), 8);

	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}

