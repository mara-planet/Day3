#include <stdio.h>

int main3()
{
	int 가격[5] = {6000,3000,500,1000,50000};

	// for문으로 전체 출력
	for (int i = 0; i < 5; i++) {
		printf("%d원 \n", 가격[i]);
	}

	printf("%d \n", 가격[1]);        // 1번째방의값

	return 0;
}