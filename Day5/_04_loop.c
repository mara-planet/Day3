#include <stdio.h>

void main4() {
	// break�� continue�� Ȱ��
	for (int i = 0; i < 100; i++)
	{
		//if (i == 0) {
		//	continue;  // ���� : �� ������ ���� �ȳ�����
		//}

		if (i % 2 == 1 || i == 0) {
		// 1~50���� ¦���� ������
			
			continue;
			
		}
		if (i > 50) {
			break;      // ������ ����
		}
		printf("%d \n", i);
	}
}         