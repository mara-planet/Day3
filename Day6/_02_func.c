#include <stdio.h>

// Plus : ���� 2�� ���ϱ�

int Plus(int n1, int n2)
{
	return n1 + n2;
}

// Minus : ���� 2�� ����

int Minus(int n1, int n2)
{
	return n1 - n2;
}

// Mul : ���� 2�� ���ϱ�

int Mul(int n1, int n2)
{
	return n1 * n2;
}

// Div : ���� 2�� ������

double Div(int n1, int n2)
{
	double result = (double)n1 / n2;       // �������� ������ ���� ����� ������ ������ �ϳ��� �Ǽ��� �ٲ���
	return result;
}


int main2()
{
	int plus_result = 0;
	int minus_result = 0;
	int mul_result = 0;
	double div_result = 0;

	// �Լ� ���
	plus_result = Plus(3, 4);
	minus_result = Minus(3, 4);
	mul_result = Mul(3, 4);
	div_result = Div(3, 4);
	

	//

	printf("%d\n", plus_result);
	printf("%d\n", minus_result);
	printf("%d\n", mul_result);
	printf("%lf\n", div_result);

	return 0;
}