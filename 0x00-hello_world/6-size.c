#include<stdio.h>
#include<string.h>

/**
 * main - prints size of types on the computer it is run
 * with a new line
 * Return: 0
 */
int main()
{
	int intType;
	float floatType;
	long long int  doubleType;
	long int longType
	char charType;

	/* sizeof evaluates the size of a variable */
	printf("Size of char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of long int: %zu byte(s)\n", sizeof(longType));
	printf("Size of long long int: %zu byte(s)\n", sizeof(doubleType));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));
    
    return (0);
}
