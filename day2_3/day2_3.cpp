#include <stdio.h>
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++) {
		if (i % 3 == 0)
			printf("  ¹Ú¼ö");
		else			
			printf("%5d", i);

		if (i % 10 == 0)
			printf("\n");
	}

}