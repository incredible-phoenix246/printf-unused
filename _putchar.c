#include "main.h"

/**
 * _putchar :uused for wrriting a single characher
 * @c: The character to print
 *
 * Return: On success 1.
 * ony when sucessful
 */
int _putchar(char c)
{
	return (buffer(c));
}

/**
 * buffer - Save the character in a buffer
 * @c: follow up buffer
 *
 * Return: 1
 **/
int buffer(char c)
{
	static char buffering[1024];
	static int i;

	if (c == -1 || i == 1024)
	{
		write(1, buffering, i);
		i = 0;
	}

	if (c != -1)
		buffering[i++] = c;

	return (1);
}

