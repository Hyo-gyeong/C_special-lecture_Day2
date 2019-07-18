#include <stdio.h>
int main(void)
{
	int fNum, sNum, temp;
	int gcd;//적어도 1은 최대 공약수라는 생각!! 하지만 나누다보면 1까지 자동으로 가기때문에 초기값으로 설정할 필요는 없음.
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

	for (i = sNum; i > 0; i--) {//'최대'공약수니까 위에서부터 내려와야하고, 작은수가 나눌 수 있는 최대의 수!
		if (fNum % i == 0 && sNum % i == 0) {//몫이랑 나머지랑 헷갈리지 말자!!
			gcd = i;//조건이 거짓일 때 gcd의 값은 뭔지 결정해줘야함..!!! _.solution = break;
			break;
		}
	}
	printf("The greates common divisor(GCD) of %d and %d is %d\n", fNum, sNum, gcd);
}