#include <stdio.h>

void main5() {
	// ���� ���
	// ���� : 90�̻��̸� A, 80�̻��̸� B, 70�̻��̸� C, 70�̸��̸� D
	char grade;         // ���
	int score;          // ����

	// ������ �Է¹ް�
	scanf("%d", &score);

	// ������ ���� ����� �˷��ּ���

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

	printf("%d��, %c���", score, grade);   // 85��, B���


}