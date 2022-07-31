#include <stdio.h>

void main7() {
	//for (int i = 1; i < 9; i++)
	//{
	//	printf("2×%d = %d \n", i, 2 * i);
	//}  i는 9보다 작아야하고, 저장공간 이름으로 쓰이고, 2 곱하기 i
	//컨트롤 시프트 슬래시 한꺼번에 주석처리

	int step = 0;
	printf("몇 단을 출력할까요?");
	scanf("%d", &step);

	for (int i = 1; i <= 9; i++)
	{
		printf("%d × %d = %d\n", step, i, step * i);
	}     
}