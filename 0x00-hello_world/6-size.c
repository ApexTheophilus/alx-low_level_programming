#include <stdio.h>
/**
 *main - Entry Point
 *Return: Always 0 (success)
 */

int main(void)
{
	int i;
	long int l;
	long long int ll;
	float d;
	char c;
	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf(Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(l));
	pritf("Size of a long long int: %lu byte(s)\n", sizeof(ll));
	pritf("Size of a float: %lu byte(s)\n", sizeof(d));
	return (0);
}
