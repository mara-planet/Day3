#include <stdio.h>

void main2() {
	// 반복문 : while, for
	// 반복문을 제어하는 명령어 : break, continue
	// break : 반복문 즉시 종료
	// continue : 반복문 처음으로 돌아가기 (1회성 취소)

	int flag = 0;
	while(1)     // 1 : 무조건 맞다, 0 : 무조건 틀리다
	{
		flag++;
		printf("%d \n", flag);

		if (flag == 500) {           // flag가 500 일때
			break;             // 반복문 즉시 종료
		}
	}
}