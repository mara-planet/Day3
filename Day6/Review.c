#include <stdio.h>

// 함수 : 개발자가 직접 만드는 기능 
// 연산자 : 프로그래밍 언어가 지원해주는 기능 (+,-,==,>=)

// 함수
// 자료형 함수명(){}

// 전달받은 값을 각각 절댓값으로 만들어서 더하는 기능
void AbsPlus(int num1, int num2) {       // 정수 2개를 전달받는 함수
	int num3 = 0, num4 = 0, result = 0;     // AbsPlus 안에서 만든 변수는 AbsPlus가 끝나면 없어짐 (지역변수)
	if (num1 < 0) {
		num3 = num1 * (-1);                 // num1이 음수면 양수로 바꿔 num3에 넣는다.
	}
	else {
		num3 = num1;                       // num1이 양수면 그대로 num3에 넣는다.
	}

	if (num2 < 0) {
		num4 = num2 * (-1);             // 음수면 -1 곱해서
	}
	else {
		num4 = num2;             // 양수면 그대로
	}
	result = num3 + num4;
	printf("%d \n", result);               // 더하기 기능과는 상관없지만 출력을 위해서 임시로 넣음
}

// 전달받은 값을 각각 절댓값(양수)으로 만들어서 빼는 기능
void AbsMinus(int num1, int num2) {                  // 정수 2개를 전달받는 함수
	int num3 = num1;                                     // 지역변수 : 함수가 사용되고 있을동안만 존재할 변수
	int num4 = num2;
	int result = 0;
	
	if (num1 < 0) {
		num3 = num3 * (-1);
	}

	if (num2 < 0) {
		num4 = num4 * (-1);
	}
	result = num3 - num4;
	printf("%d \n", result);                         // 빼기 기능과는 상관없지만 출력을 위해서 임시로 넣음
}

// 숫자 3개를 더하는 함수 (함수 정의)
void Plus3(int num1, int num2, int num3) {
	printf("%d\n", num1 + num2 + num3);

	//int result = num1 + num2 + num3;
	//printf("%d\n", result);
}



int main0() {
	// 프로젝트를 실행하면 main함수를 실행한다.
	AbsPlus(3, 4);       // 3 + 4 == 7

	AbsPlus(-3, 4);         // |-3| + 4 == 7

	AbsPlus(3, -4);       // 3 +|(-4)| == 7

	AbsPlus(-3, -4);      // |(-3)| + |(-4)| == 7

	AbsMinus(3, 4);          // 3 - 4 == -1

	AbsMinus(-3, 4);           // |-3| - 4 == -1
	
	AbsMinus(3, -4);           // 3 - |(-4)| == -1

	AbsMinus(-3, -4);          // |(-3)| - |(-4)| == -1

	Plus3(1, 2, 3);
	return 0;
}