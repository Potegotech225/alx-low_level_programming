#include "main.h"
#include <unistd.h>
/**
 * _putchar - it writes the character c to the stdout
 * @c: The character to print
 *
 * Return: if success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
