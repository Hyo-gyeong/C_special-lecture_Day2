#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int temp;
	int qNum;
	int num1, num2;
	int i;
	int answer;
	int c = 0, w = 0;
	
	

	printf("Enter a question number: ");
	scanf("%d", &qNum);

	for (i = 1; i <= qNum; i++){

		srand(time(NULL));

		num1 = rand() % 10;
		num2 = rand() % 10;
		
		if (num1 < num2){
			temp = num2;
			num2 = num1;
			num1 = temp;
		}

		printf("Q%d: %d - %d = ", i, num1, num2);
		scanf("%d", &answer);

		if (answer == num1 - num2) {
			printf("You are correct!\n");
			c++;
		}
		else {
			printf("Your answer is wrong\n");
			w++;
		}
	}
	printf("---------------------------------------\n");
	printf("Correct count is %d\n", c);
	printf("Worng count is %d\n", w);
	printf("---------------------------------------\n");
}