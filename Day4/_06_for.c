#include <stdio.h>

void main6() {
	// for�� ����ؼ� 1~10���� ���
	// 1~10������ ��
	int �հ� = 0;         // 1, 3, 6, 10, ..., 55f

	for (int i = 0; i < 10; i++)		// i=i+1
	{
		�հ� += (i + 1);
		printf("%d \n", i+1);
	}

	printf("%d \n", �հ�);

	// ���� �Է¹ް� �հ踦 ���ϼ���
	int b = 0;
	int sum = 0;
	printf("����� �� ���ұ��?");
	scanf("%d", &b);
	for (int a = 0; a < b; a++)
	{
		sum += (a + 1);
		printf("%d \n", a+1);
	}
	
	printf("%d", sum);
	//for (int i = 1; i < 11; i++)
	//{
	//	printf("%d \n", i);
	//}

	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d \n", i+1);
	//}
}