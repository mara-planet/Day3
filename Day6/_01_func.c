#include <stdio.h>

// 함수
// 자료형 함수명(){}
// () : 입력받을 값
// {} : 내용
// 함수명 : 함수명
// 자료형 : 리턴값의 형태

void func1() {
	printf("함수1 사용 \n");
	// void : 리턴값 없음
	// () : 비어있으면 받을 값 없음
}

void func2() {
	printf("함수2 사용 \n");
	// void : 리턴값 없음
	// () : int변수가 하나 있으니 사용할 떄 정수값 하나를 넣어줘야함
}

void func3(char c) {
	printf("함수3 사용 \n");
	// void : 리턴값 없음
	// () : char변수 한개가 있으니 사용할 때 문자 하나를 넣어줘야함
}

void func4(int n1, int n2) {
	printf("%d \n", n1 + n2);
	// 첫번째 숫자는 n1에, 두번째 숫자는 n2에 담긴다.
	// void : 리턴값 없음
}

int func5(int num1, int num2) {
	int result = num1 + num2;
	return result;          // 사용한 곳으로 return옆의 값을 전달

	// () : 받는 것
	// return : 주는 것
}

char func6(int num) {
	if (num >= 0) {
		return 'Y';
	}
	else {
		return 'N';
	}
}

int main1() 
{
	func1();            // 아무값도 안넘겨줘도 됨
	func2(314);            // int변수 하나를 받게끔 만들어졌으니 정수 한개를 써줘야함
	func3('A');           // 문자 값을 한개 전달해줘야함
	func4(1,2);              // 첫번째 값은 첫번쨰 변수(n1)에, 두번째 값은 두번째 변수(n2)에 담김

	// () : 함수로 값을 전달
	// return : 함수로부터 값을 전달받음
	int number2 = 5 + 10;        // 출력X, return으로 결과값을 알려줌
	int number = func5(5,10);          // 15
	 
	printf("%d \n", 5 + 10);            // 5 + 10
	printf("%d \n", func5(5, 10));      // func5(5,10)

	// func6 : 양수값이 들어오면 Y를 알려주고, 음수값이 들어오면 N을 알려주는 기능
	printf("%c \n", func6(10));        // Y
	printf("%c \n", func6(1));         // Y
	printf("%c \n", func6(-5));        // N

	// 사용할때 넘겨주는 값은 ()에, 사용후에 넘겨받을 값은 return에 적어준다.
	char a = '\0';
	a = func6(-3);
	a = 'N';

	number = 5 + 10;           // 15 가 남음
	number = func5(5, 10);      // 15 가 남음

	return 0;
}