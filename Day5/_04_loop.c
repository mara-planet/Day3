#include <stdio.h>

void main4() {
	// break와 continue를 활용
	for (int i = 0; i < 100; i++)
	{
		//if (i == 0) {
		//	continue;  // 제어 : 그 조건의 값은 안나오게
		//}

		if (i % 2 == 1 || i == 0) {
		// 1~50까지 짝수만 나오게
			
			continue;
			
		}
		if (i > 50) {
			break;      // 완전히 멈춤
		}
		printf("%d \n", i);
	}
}         