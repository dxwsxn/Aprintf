#include <unistd.h>

/**
 * _putchar - writes char to std output
 * c: what is being written
 *
 * Return: 1 when good, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
