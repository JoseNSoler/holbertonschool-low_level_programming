#include "holberton.h"

int pal1(char *a, int l);
int pal2(char *a, int l);

/**
 * pal1 - length of char a
 * @a: point of a string
 * @l: integer to count length
 * Return: int function- returns length
 */

int pal1(char *a, int l)
{
	if (*a == 0)
	{
		return (l - 1);
	}
	return (pal1(a + 1, l + 1));
}


/**
 * pal2 - compares string to his reverse herself
 * @a: string
 * @l: length
 * Return: returns recursion palindrome
 */

int pal2(char *a, int l)
{
	if (*a != *(a + l))
	{
		return (0);
	}
	else if (*a == 0)
	{
		return (1);
	}
	return (pal2(a + 1, l - 2));
}


/**
 * is_palindrome - function to check if a string is a palindrome
 * @s: pointer string to analize
 * Return: 1 if coincidence, 0 else
 *
 */


int is_palindrome(char *s)
{
	int l;

	l = pal1(s, 0);
	return (pal2(s, l));
}
