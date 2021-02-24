#include "holberton.h"
/**
 *is_prime_number - returns 1 if a number is prime
 *
 *@n:input
 *Return: 1-prime,0-otherwise
 *
 */
int is_prime_number(int n)
{

}
/**
 *_prime - returns 1 if no. is prime
 *
 *@n: input
 *@i:input
 *Return:1 - prime ,0- otherwise
 *
 */
int _prime(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	if (n / 2 > i)
	{
		return (_prime(n, i + 2));
	}
	else
	{
		return (1);
	}
}
