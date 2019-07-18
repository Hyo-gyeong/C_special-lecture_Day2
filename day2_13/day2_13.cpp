#include <stdio.h>

void degree0 (void);
void degree180 (void);
void up (void);

int main(void)
{
	degree0 ();
	degree180 ();
	up ();
}

void degree0 (void)
{
	int i, j;

	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= i; j++) 
			printf("*");
		printf("\n");
	}
	printf("\n");
}

void degree180 (void)
{
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 5 - i; j >= 1; j--) 
			printf("*");
		printf("\n");
	}
	printf("\n");
}

void up (void)
{
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < i; j++) 
			printf(" ");
		for (j = 5 - i; j >= 1; j--) 
			printf("*");
		printf("\n");
	}
}