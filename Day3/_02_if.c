#include <stdio.h>

void main2() {
	int age = 0;
	printf("���̸� �Է��ϼ��� >>");
	scanf("%d", &age);

	// if1
	if (age < 10) {
		printf("��� �Դϴ�.\n");
	}
	else if (age < 20) {
		// else if : if�� Ʋ������ �� ������ �˻��� if
		printf("10���Դϴ�\n");
	}

	else if (age < 30) {     //���� �ִ� if �� else if�� ��� Ʋ���� ���� �˻�
		//20���Դϴ�.
		printf("20���Դϴ�.\n");
	}

	// if4
	else if (age > 30) {
		//30�� �̻��Դϴ�.
		printf("30�� �̻��Դϴ�.");
	}
}