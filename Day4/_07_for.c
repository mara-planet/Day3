#include <stdio.h>

void main7() {
	//for (int i = 1; i < 9; i++)
	//{
	//	printf("2��%d = %d \n", i, 2 * i);
	//}  i�� 9���� �۾ƾ��ϰ�, ������� �̸����� ���̰�, 2 ���ϱ� i
	//��Ʈ�� ����Ʈ ������ �Ѳ����� �ּ�ó��

	int step = 0;
	printf("�� ���� ����ұ��?");
	scanf("%d", &step);

	for (int i = 1; i <= 9; i++)
	{
		printf("%d �� %d = %d\n", step, i, step * i);
	}     
}