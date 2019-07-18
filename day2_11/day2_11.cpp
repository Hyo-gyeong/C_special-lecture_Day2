#include <stdio.h>
int main(void)
{
	int input, reverse = 0;
	int rest = 0;

	printf("Enter a number: ");
	scanf("%d", &input);

	while (input != 0) {
		rest = input % 10;
		reverse = reverse * 10 + rest;
		input /= 10;
	}
	printf("Reversed number is %d\n", reverse);
}