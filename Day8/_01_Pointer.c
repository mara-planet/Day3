#include <stdio.h>

int myFunc(int* address)
{
	int num = 50;            // 지역 변수
	*address = num;          // 받아온 주소값을 역참조하여 num값 대입
}

int main1()
{
	int num = 30;           // 지역 변수
	int* p_num = &num;      // 포인터변수에 주소값대입
	myFunc(p_num);

	printf("%d \n", num);        // 주소값을 역참조해서 값을 변경했으니 원본의 값이 바뀜

	return 0;
}