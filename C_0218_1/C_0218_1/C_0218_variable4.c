#include <stdio.h>

int main5() {
	// ���� : �������
	// �ڷ��� : ���� �ȿ� ��� �����Ͱ��� ����
	// ���� ����(���� ����)
	// �ڷ��� ������;
	int num;
	char chr;
	double num2;
	
	//���� ���� (�� �ֱ� =)
	num = -33; //�����ʰ��� ���� ������ �ִ� �ǹ�
	chr = 'a';
	num2 = 3.14;
	num2 = -0.01; // ���� �������� ��� ���� �ִ� ���� �����ϰ� ������ ���� ��

	printf("%d \n", num);  //-33

	num = 1515;
	printf("%d \n", num);  //1515

	// �����ʱ�ȭ(����� ������ ���ÿ�)
	int num3 = 119;
	char ch2 = '3';

	// �ڷ����� �����ִ� == ������ ó�� �����
	// �ڷ����� �������ִ� == ���� �ȿ� �ִ� ���� ����ϰڴ� or �����ȿ� �ִ� ���� �����ϰڴ�

	int num4 = 4;  // ������ ó�� ����
	num4 = 44;      // �ڷ����� ��������� �̹� �ִ� ������ Ȱ����
	printf("%d", num4); // �ڷ����� ��������� =�� ������ ���� �ȿ� �ִ� ���� ����ϰڴ�

	// ��� ���ڿ�(ū����ǥ) �ȿ��� ����Ҷ��� %d
	
	// �ѹ��� �����ϰ� �ѹ��� �ʱ�ȭ
	int n1, n2, n3; // �ڷ��� �����л���Ұ��
	int n4 = 1, n5 = 6, n6 = 6;


	return 0;
}