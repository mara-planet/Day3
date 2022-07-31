#include <stdio.h>

void main6() {
	// for를 사용해서 1~10까지 출력
	// 1~10까지의 합
	int 합계 = 0;         // 1, 3, 6, 10, ..., 55f

	for (int i = 0; i < 10; i++)		// i=i+1
	{
		합계 += (i + 1);
		printf("%d \n", i+1);
	}

	printf("%d \n", 합계);

	// 값을 입력받고 합계를 구하세요
	int b = 0;
	int sum = 0;
	printf("몇까지 다 더할까요?");
	scanf("%d", &b);
	for (int a = 0; a < b; a++)
	{
		sum += (a + 1);
		printf("%d \n", a+1);
	}
	
	printf("%d", sum);
	//for (int i = 1; i < 11; i++)
	//{
	//	printf("%d \n", i);
	//}

	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d \n", i+1);
	//}
}