#include <stdio.h>


// Sum
void Sum(int num1, int num2) {
	int result = num1 + num2;
	printf("%d \n", result);
}
// Sub
void Sub(int num1, int num2) {
	int result = num1 - num2;
	printf("%d \n", result);
}
// Mul
void Mul(int num1, int num2) {
	int result = num1 * num2;
	printf("%d \n", result);
}
// Div
void Div(int num1, int num2) {
	int result = num1 / num2;
	printf("%d \n", result);
}

// ���� 2���� �޾Ƽ� ���� �������� ����� ���ϱ� (���� : ���̳ʽ��� �÷����� �ٲ�
void A(int num1, int num2) {
	int result = num1 num2;
	
}
// ���� 2���� �޾Ƽ� ���� �������� ����� ���� (���� : ���̳ʽ��� �÷����� �ٲ�)
 void B(int num1, int num2) {
 
 }
// C����� �������� main() �Լ��̴�.
int main()
{
	Sum(2, 2);             // 4
	 
	Sub(2, 2);             // 0

	Mul(2, 2);            // 4

	Div(2, 2);            // 1

	A(-3, 2);             // 5

	B(-5, -1);            // 4

	return 0;
}