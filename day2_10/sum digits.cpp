#include <stdio.h>

void drawGraph (int score);//함수 원형 지정

int main(void)
{
	int score;

	printf("점수를 입력하세요.: ");
	scanf("%d", &score);

	drawGraph( score );//던져주는 값만 적어서 함수 부르기

	return 0;
}

void drawGraph (int score)
{
	int i;
	int count = score / 10;

	printf("%d : ", score);

	for (i = 0; i < count; i++) 
		printf("* ");
	printf("\n");

	return;
}