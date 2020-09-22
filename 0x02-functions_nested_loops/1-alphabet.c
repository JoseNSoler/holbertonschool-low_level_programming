#include "holberton.h"

/**
 * main - check the code for Holberton School students
 * Return:  0 void
 */

int main(void)
{

	print_alphabet();

	return (0);
}

/**
 * print_alphabet - alphabet with heade
 * Return for alphabet
 */

void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');

}
