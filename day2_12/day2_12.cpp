#include <stdio.h>
int main(void)
{
	int input, reverse = 0, origin;
	int rest = 0;

	printf("Enter a number: ");
	scanf("%d", &input);

	origin = input;

	while (input != 0) {
		rest = input % 10;
		reverse = reverse * 10 + rest;
		input /= 10;
	}
	if (reverse == origin) 
		printf("%d is pallindrome\n", origin);
	else 
		printf("%d is not a pallindrome\n", origin);
}