#include <stdio.h>

// ����ü Human (�̸�, ����)
typedef struct Human {
	char* �̸�;
	int age;
}Hu;

// �Լ�1 ��������(Human*) : �̸��� ���� ���
void info(Hu* human)
{
	printf("�̸� : %s, ����: %d \n", human->�̸�, human->age);
}

// �Լ�2 Modify(Human*) : scanf�� ���ؼ� ���̸� ����
int Modify(Hu* human)
{
	printf("%d ���� �����ϱ� >>", human->age);
	scanf("%d", &(human->age));
}

int main()
{
		// ����ü���� �ʱ�ȭ
	Hu jiwon = { "jiwon", 28 };

		// ������� �Լ�
	info(&jiwon);

		// ���� �Լ�
	Modify(&jiwon);

		// ������� �Լ�
	info(&jiwon);

	return 0;
}