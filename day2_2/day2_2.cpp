#include <stdio.h>
int main(void)
{
	int fNum, sNum, temp;
	int gcd;//��� 1�� �ִ� �������� ����!! ������ �����ٺ��� 1���� �ڵ����� ���⶧���� �ʱⰪ���� ������ �ʿ�� ����.
	int i;

	printf("Enter a First number: ");
	scanf("%d", &fNum);
	printf("Enter a Second number: ");
	scanf("%d", &sNum);

	if (fNum < sNum) {
		temp = sNum;
		sNum = fNum;
		fNum = temp;
	}

	for (i = sNum; i > 0; i--) {//'�ִ�'������ϱ� ���������� �����;��ϰ�, �������� ���� �� �ִ� �ִ��� ��!
		if (fNum % i == 0 && sNum % i == 0) {//���̶� �������� �򰥸��� ����!!
			gcd = i;//������ ������ �� gcd�� ���� ���� �����������..!!! _.solution = break;
			break;
		}
	}
	printf("The greates common divisor(GCD) of %d and %d is %d\n", fNum, sNum, gcd);
}