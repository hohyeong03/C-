#include <stdio.h>

int main4() {
	/*
    �ۼ��� : ��ȣ��
    �ۼ���¥ : 2023.02.18
    ���: printf�� ���� ���
    */
	//�̸�, �⵵, ��, ��, f ==> ����
	// ���ڿ�[]���� : �̸�  %s
	// �������� : �⵵, ��, ��  %d
	// ���ں��� : f  %c

	char name[] = "��ȣ��";  //���ڿ� %s
	int year = 2023;         //�������� %d
	int month = 2;           //�������� %d
	int day = 18;            //�������� %d
	char word = 'f';         //����(1����) %c
	
	printf("�ۼ��� : %s\n", name);
	printf("�ۼ���¥ : %d-%d-%d\n", year, month, day);
	printf("��� : print%c �� ���ڿ����", word);

	return 0;
}