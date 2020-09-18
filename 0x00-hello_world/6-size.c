/**
*main - prin1s 3 all sizes char, int, long, double and float
*
*Return: 0
*/
#include <stdio.h>
int main(void)
{

char aaa;
int bbb;
long ccc;
double ddd;
float eee;

printf("Size of a char: %d byte(s)\n", sizeof(aaa));
printf("Size of an int: %d byte(s)\n", sizeof(bbb));
printf("Size of a long int: %d byte(s)\n", sizeof(ccc));
printf("Size of a long long int: %d byte(s)\n", sizeof(ddd));
printf("Size of a float: %d byte(s)\n", sizeof(eee));
return (0);
}
