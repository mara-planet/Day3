#include <stdio.h>

//int g_num = 1;          // �������� : {}�ȿ��� ������� ������ �ƴ�, {}�� ��� ���� ����
// ���������� ��𼭵� ��� �����ϳ� ������ �ȵǾ� �޸� ���� ���� --> �������

int function1() {
	int num = 3333;                       // �������� : ������� �߰�ȣ�� ����� ������ ������
	 
	return num;
}

int function2() {
	int num = 0;
	printf("%d\n"); // 3333���
	return 0;
}

int main4()
{
	int num = 0;
	num = function1();
	function2(num);
	function1();
	function2();
	//printf("%d\n", num);           // main���� ��������ϱ� main���� ����� �� ����
	//printf("%d\n", num2);
	//printf("%d\n", num3);
	//printf("%d\n", g_num);

	return 0;
}