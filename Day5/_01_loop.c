#include <stdio.h>

void main1() {
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		printf("%d \n", i);
		// ÁÙÀÎ¸»
		sum += i;          // sum = sum + i;
	}

	sum += 0;              // sum = sum + 0;
	sum += 1;              // sum = sum + 1;
	sum += 2;              // sum = sum + 2
	sum += 3;              // sum = sum + 3
	sum += 4;              // sum = sum + 4

	printf("ÃÑÇÕ : %d \n", sum);

	// sum = sum + 1;
	// sum += 1;
	// sum++;

	// sum = sum + 2
	// sum += 2;

	sum = 0;
	sum + 2;
	printf("%d \n", sum);             // sum = 0

	sum = sum + 2;            // sum += 2;
	sum + 2;
}