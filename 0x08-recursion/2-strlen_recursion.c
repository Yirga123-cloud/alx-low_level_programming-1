#include "holberton.h"
/**
 *_strlen_recursion - returns length of a string
 *
 *@s:string
 *
 *Return:length
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
