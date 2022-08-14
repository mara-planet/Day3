#include <stdio.h>

// 구조체 Human (이름, 나이)
typedef struct Human {
	char* 이름;
	int age;
}Hu;

// 함수1 정보보기(Human*) : 이름과 나이 출력
void info(Hu* human)
{
	printf("이름 : %s, 나이: %d \n", human->이름, human->age);
}

// 함수2 Modify(Human*) : scanf를 통해서 나이를 수정
int Modify(Hu* human)
{
	printf("%d 나이 수정하기 >>", human->age);
	scanf("%d", &(human->age));
}

int main()
{
		// 구조체변수 초기화
	Hu jiwon = { "jiwon", 28 };

		// 정보출력 함수
	info(&jiwon);

		// 수정 함수
	Modify(&jiwon);

		// 정보출력 함수
	info(&jiwon);

	return 0;
}