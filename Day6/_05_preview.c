#include <stdio.h>

int function3(int* p_num) {
	int num = 3333;         // 지역변수
	*p_num = num;           // 넘겨받은 위치에다가 num값을 대입

	return 0;
}

int function4(int num) {
	printf("%d\n", num);
	return 0;
}

int main5() 
{
	// 포인터 : C언어를 사용하는 이유
	int num = 0;
	int* p_num = &num;          // num 위치를 저장하고
	function3(p_num);           // 위치를 넘겨서
	function4(num);

	
	return 0;
}