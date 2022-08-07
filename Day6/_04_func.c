#include <stdio.h>

//int g_num = 1;          // 전역변수 : {}안에서 만들어진 변수가 아님, {}를 벗어날 일이 없음
// 전역변수는 어디서든 사용 가능하나 해제가 안되어 메모리 낭비가 심함 --> 사용자제

int function1() {
	int num = 3333;                       // 지역변수 : 만들어진 중괄호를 벗어나면 공간이 없어짐
	 
	return num;
}

int function2() {
	int num = 0;
	printf("%d\n"); // 3333출력
	return 0;
}

int main4()
{
	int num = 0;
	num = function1();
	function2(num);
	function1();
	function2();
	//printf("%d\n", num);           // main에서 만들었으니깐 main에서 사용할 수 있음
	//printf("%d\n", num2);
	//printf("%d\n", num3);
	//printf("%d\n", g_num);

	return 0;
}