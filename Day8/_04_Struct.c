#include <stdio.h>

// C��� : ����ü-�Լ�-������

typedef struct ĳ���� {
	char* �̸�;
	int ü��;
	int ���ݷ�;
}ĳ��;

void ShowInfo(ĳ��* c1, ĳ��* c2)
{
	printf("�̸� : %s, ü��: %d, ���ݷ� : %d \n", c1->�̸�, c1->ü��, c1->���ݷ�);
	printf("�̸� : %s, ü��: %d, ���ݷ� : %d \n", (*c2).�̸�, (*c2).ü��, (*c2).���ݷ�);
}

void Fighting(ĳ��* c1, ĳ��* c2)         // �ڷ��� �տ� * : ������ ���� �������� �ּҰ��� �޾ƾ���
{
	while (1) {
		//����
		ShowInfo(c1, c2);           // ���� �տ� * : �ּҰ��� �������Ͽ� ���� ����

		//����
		(*c2).ü�� -= (*c1).���ݷ�;
		(*c1).ü�� -= (*c2).���ݷ�;

		//üũ
		if ((*c1).ü�� <= 0 || (*c2).ü�� <= 0) {
			if ((*c1).ü�� <= 0) {
				printf("%s ����Ф�\n", (*c1).�̸�);

			}
			if ((*c2).ü�� <= 0) {
				printf("%s ����Ф�\n", (*c2).�̸�);
				
			}
			break;
		}
	}
}

int main4()
{
	ĳ�� ���� = { "����", 40, 6 };
	ĳ�� ���۸� = { "���۸�", 35, 5 };
	ĳ�� ���� = { "����", 160, 16 };
	ĳ�� ��Ʈ�� = { "��Ʈ��", 400, 20 };
	ĳ�� �ٸ����� = { "�ٸ�����", 160, 16 };

	// �ο�
	Fighting(&��Ʈ��, &����);

	// ��������
	ShowInfo(&��Ʈ��, &����);



	return 0;
}