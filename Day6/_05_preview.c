#include <stdio.h>

int function3(int* p_num) {
	int num = 3333;         // ��������
	*p_num = num;           // �Ѱܹ��� ��ġ���ٰ� num���� ����

	return 0;
}

int function4(int num) {
	printf("%d\n", num);
	return 0;
}

int main5() 
{
	// ������ : C�� ����ϴ� ����
	int num = 0;
	int* p_num = &num;          // num ��ġ�� �����ϰ�
	function3(p_num);           // ��ġ�� �Ѱܼ�
	function4(num);

	
	return 0;
}