#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: Pointer to string.
 *
 * Return: Length of string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return 0;
	else
		return (_strlen_recursion(s + 1) + 1);

}
