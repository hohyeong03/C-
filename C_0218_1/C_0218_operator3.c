#include <stdio.h>

int main8() {
	
	// ���������
	//+, -, *, /, %
	// + : ���ʰ��� �����ʰ��� ���ϱ�
	// - : ���ʰ����� �����ʰ��� ����
	// * : ���ʰ��� �����ʰ����� ���ϱ�
	// / : ���ʰ��� �����ʰ����� ������
	// % : ���ʰ��� �����ʰ����� ���� �������� ����(���������� ���Ҷ� ���)

	// ���� page74
	int num1 = 7, num2 = 3;
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d\n", num1, num2, num1 % num2);


	return 0;
}