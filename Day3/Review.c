#include <stdio.h>

void main0() {
	// 변수 : 출력을 하는데 수정하기가 너무 어렵다. 미리 만든 공간에 저장하면서 갖다 쓰자(저장공간)

	// 정수형 변수 (숫자형태 저장공간)
	int 변수명1 = 0; // 기본값 0:기본으로 들어가는값

	// 실수형 변수 (소수점있는숫자형태 저장공간)
	float 변수명2 = 0.0f;

	// 문자형 변수 (한글자 저장공간, 256가지)
	// 영어 a~z : 26 + 26
	// 한글 ㄱ~ㅎ, ㅏ~ㅣ, 가~하, 거~허, ... : 256가지를 넘어감
	char 변수명3 = 'a';

	// 문자열형 변수 (여러글자 저장공간)

	char 변수명4[] = "여러글자 넣기";            //  char 14개를 붙여놓음
	char 변수명5[100] = "여러글자 넣기";            // char 100개를 붙여놓았고 14칸만 사용

	// 변수에 값을 넣는 방법
	변수명1 = 33;          // =을 통해서 값을 넣을 수 있음
	// 변수명 = 값;
	변수명1 = 변수명1;      // 변수명1 = 33;
	
	// 출력printf
	printf("아무노래나 일단 틀어 아무거나 신나는걸로");
	printf("\n");                 // 줄바꿈
	printf("\n\n");               // 2번 줄바꿈

	// 출력에 변수를 사용
	// 정수 %d
	printf("저장한 값은 : %d\n", 변수명1);

	// 실수 %f
	printf("실수의 값은 : %f입니다.\n", 변수명2);

	// 문자 %c, 문자열 %c
	printf("%c %s %s \n", 변수명3, 변수명4, 변수명5);

	//입력 %d %f %c %s
	scanf("%s", &변수명5);
	printf("%c %s %s \n", 변수명3, 변수명4, 변수명5);
}