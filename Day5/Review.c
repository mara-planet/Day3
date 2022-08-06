#include <stdio.h>

void main0() {
	// 제어문 : if, switch, for, while, ...
	// 조건문/반복문
	// if(){} : ()안에 조건이 맞으면 {}내용 실행, 조건이 틀리면 {}내용 무시
	if (1 == 1) {
		printf("1은 1과 같다 \n");
	}

	if (1 != 1) {
		printf("무시 \n");
	}

	// C언어에서 0은 틀리다는 표현, 1은 맞다는 표현
	if (0) {                    // if가 맞으면 밑에 모두 무시
		printf("무시 \n");
	}
	else if (1) {               // if가 틀리면 검사
		printf("실행 \n");
	}
	else {                      // 모두 틀리면 실행
		printf("무시 \n");
	}

	int age = 28;
	if (age < 10) {
		printf("어린이\n");
	}
	else if (age < 20) {
		printf("10대 \n");
	}
	else if (age < 30) {
		printf("20대 \n");
	}
	else if (age < 40) {
		printf("30대 \n");
	}
	else {
		printf("그 밖에 \n");
	}

	// switch(){} : ()안에 내용이 case와 같으면 해당 case부터 실행
	switch (age/10) {
	case 0:
		printf("어린이\n");
		break;
	case 1:
		printf("10대\n");
		break;
	case 2:
		printf("20대\n");
		break;
	case 3:
		printf("30대\n");
		break;
	case 4:
		printf("40대\n");
		break;
	case 5:
		printf("50대\n");
		break;
	default:
		printf("그밖에 \n");
	}

	// if~else if~else
	// switch~case~break

	// 반복문 : while, for, do~while
	printf("안녕");    // 3번
	printf("안녕");    // 3번
	printf("안녕\n");    // 3번
	// 안녕 10000번은? => 반복문

	// 안녕 3번
	int flag = 0;
	while (flag < 3) {
		printf("안녕 \n", flag);
		flag++; // 줄인말  flag = flag + 1
	}


	flag = 0;
	flag = flag + 1;     // flag++;
	flag + flag + 1;     // flag++
	flag + flag + 1;     // flag++


	printf("안녕 \n");
	flag++;             // flag = flag + 1;

	printf("안녕 \n");
	flag++;             // flag = flag + 1;

	printf("안녕 \n");
	flag++;             // flag = flag + 1;


	printf("최종값 : %d \n", flag);
	// while(){} : ()안에 내용이 맞으면 {}를 실행하고 ()로 돌아감, 틀릴 때까지 실행

	while (1 != 1) {
		printf("무시 \n");
	}

	for (int i = 1; i < 10001; i++)
	{
		printf("안녕 \n");             //안녕 10000번
	}
}