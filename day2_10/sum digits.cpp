#include <stdio.h>

void drawGraph (int score);//�Լ� ���� ����

int main(void)
{
	int score;

	printf("������ �Է��ϼ���.: ");
	scanf("%d", &score);

	drawGraph( score );//�����ִ� ���� ��� �Լ� �θ���

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