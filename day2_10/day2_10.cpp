#include <stdio.h>

int sumDigits (int n);

int main(void)
{
	int input;

	printf("Enter a number: ");
	scanf("%d", &input);

	printf("Sum is %d\n", sumDigits(input));//������ �� ���� ���� ȣ���� �ʿ� ����.

	return 0;
}

int sumDigits (int n)
{
	int sum = 0;

	while (n != 0) {
		sum += n % 10;
		n = n / 10;
	}
	return sum;
}