#include <stdio.h>

int main0()
{
	// �迭 : ������ ������ ����⺸�� �������� ���� ���� (�ݺ��� ��� ����)

	// �����迭 ����
	int num[10] = { 0,0,0,0,0,0,0,0,0,0 };
	num[0] = 1;      // ù��° ��
	num[1] = 10;      // �ι�° ��
	num[2] = 100;      // ����° ��

	// �Ϲݺ��� �������� �ݺ��� ����� �Ұ���������
	// �迭�� ����� �ݺ����� ���� ��� ����� �����ϴ�
	for (int i = 0; i < 10; i++)
	{
		printf("%d \n", num[i]);
	}

	// ���ڹ迭 ����
	char str[10] = "hello";
	for (int i = 0; i < 10; i++)
	{
		printf("%c \n", str[i]);
	}

	// �迭�� ������ġ�� ����ؼ� ��ĭ�� �̵��ϸ� ����Ѵ�.
	str[0];      // ù���� ���� ��ġ�� ����ؼ� ������
	num[0];      // ù���� ���� ��ġ�� ���� ��� +1 +2 +3


	// ������ : ������ �ּ�(��ġ)�� ����ϴ� ���
	// �Ϲݺ��� : ���� ���(����)
	int* pnum = &num;
	printf("�迭�� �̸� : %d \n", num);
	printf("������ �ּ� : %d \n", pnum);
	printf("0��° �� : %d \n", num[0]);  // [] : ���° ������ �˷���
	printf("�������� : %d \n", *pnum);

	printf("1��° �� : %d \n", num[1]);
	printf("1���� �� : %d \n", *(pnum + 1));

	// ���ڹ迭 (���ڿ�)
	char msg[] = "�ȳ��ϼ���";          // 11
	char* msg2 = "�ȳ��ϼ���";          // 11

	printf("%s \n", msg);
	printf("%d \n", msg2);


	float f = 3.14f;
	float* fp;        // �����ͺ��� ����
	fp = &f;          // �ּ������� ����
	*fp;         // ������ (�ּ��������� ���� ����)
	*fp = 33.44f;          // �������� �ؼ� ���� ����

	printf("%f", f);

	return 0;
}