#include "holberton.h"
/**
 *more_numbers - from 0-14 x10
 *
 *Description:0-14 x10
 *
 *Return:void
 *
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar('0' + (j / 10));
				_putchar('0' + (j % 10));
			}
			else
			{
				_putchar('0' + j);
			}
		}
		_putchar('\n');
	}
}
