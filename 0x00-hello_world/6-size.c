# include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	print("size of a char: %i byte(s)\n", sizeof(char));
	print("size of an int: %i byte(s)\n", sizeof(int));
	print("size of a long: %i byte(s)\n", sizeof(long));
	print("size of a long long int: %i byte(s)\n", sizeof(long long int));
	print("size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
