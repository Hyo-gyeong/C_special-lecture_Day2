#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int input;
	int com;
	
	srand(time(NULL));

	com = rand() % 3;
	
	printf("Scissors(0), rock(1), paper(2) : ");
	scanf("%d", &input);

	switch (com) 
	{
	case 0:
		printf("The computer is scissor.");
			if (input == 0)
				printf("You are scissor. We draw.\n");
			else if (input == 1)
				printf("You are rock. You win.\n");
			else if (input == 2)
				printf("You are paper. You lose.\n");
			break;
	case 1:
		printf("The computer is rock.");
			if (input == 0)
				printf("You are scissor. You lose.\n");
			else if (input == 1)
				printf("You are rock. We draw.\n");
			else if (input == 2)
				printf("You are paper. You win.\n");
			break;
	case 2:
		printf("The computer is paper.");
			if (input == 0)
				printf("You are scissor. You win.\n");
			else if (input == 1)
				printf("You are rock. You lose.\n");
			else if (input == 2)
				printf("You are paper. We draw.\n");
			break;
	}
}