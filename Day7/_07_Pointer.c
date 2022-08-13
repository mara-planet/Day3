#include <stdio.h>

void Swap1(int num1, int num2)
{
	int backup = num1;      // num1���� ���� ����صд�.
	num1 = num2;            // num2�� ������ num1�� �����Ѵ�.
	num2 = backup;          // ����� ���� num2�� �ִ´�.
}

void Swap2(int* num1, int* num2)
{
	// num1 == &n1;
	// num2 == &n2;
	int backup = *num1;      //  &n1 (x) // &n1(o)
	*num1 = *num2;
	*num2 = backup;
}

int main7()
{
	int n1 = 3;
	int n2 = 2;
	printf("�ٲٱ� �� : %d, %d \n", n1, n2);

	// Swap�̶�� �Լ��� ���ؼ� n1�� n2�� ���� �ٲ��ְ� ����
	// Swap1(n1, n2);          // Swap1(3,2)
	Swap2(&n1, &n2);       // �ּҰ��� �Ѱ���
	
	printf("�ٲ� �� : %d, %d \n", n1, n2);

	return 0;
}

// only SW : ������ �ʿ�X (��, �� : Java, Python)
// HW+SW : �ϵ���� ������ ���ؼ� ������ �ʿ� (�߿���, IOT : C���)