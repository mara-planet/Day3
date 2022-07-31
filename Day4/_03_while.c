#include <stdio.h>

void main3() {
	// while 을 사용해서 내이름 10번 출력하기

	// 1. 기준점을 세운다
	// 2. while(){}을 만든다
	// 3. {} 안에서 기준점의 값을 증감시켜준다.
	// 4. flag : 기준점

	int flag = 0;  
	while (flag < 10) {    
		printf("서지원 \n");       
		flag++;         // i = i+1  
	}

	// 5번 -> 5번 실행하면 조건을 틀리도록 조작
	printf("the end");
}