#include <stdio.h>

void main5() {
	// 학점 계산
	// 점수 : 90이상이면 A, 80이상이면 B, 70이상이면 C, 70미만이면 D
	char grade;         // 등급
	int score;          // 점수

	// 점수를 입력받고
	scanf("%d", &score);

	// 점수에 따라서 등급을 알려주세요

	if (score >= 90) {
		grade = 'A';
		printf("%c\n", grade);
	}

	else if (score >= 80) {
		grade = 'B';
		printf("%c\n", grade);
	}

	else if (score >= 70) {
		grade = 'C';
		printf("%c\n", grade);
	}

	else {
		grade = 'D';
		
	}

	printf("%d점, %c등급", score, grade);   // 85점, B등급


}