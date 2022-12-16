#include <stdio.h>
/**
 * main -print out sizes of data tyoes in c
 * code by CRIMSONDAVID
 * Return: 0
*/
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of int: %lu bytes(s)\n", (unsigned long)sizeof(i));
	printf("Size of long int: %lu bytes(s)\n", (unsigned long)sizeof(li));
	printf("Size of long long int: %lu bytes(s)\n", (unsigned long)sizeof(lli));
	printf("Size of float: %lu bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}
