#include <stdio.h>

int main() {

	int kor = 50, eng = 40, math = 60;
	int sum = kor + eng + math;
	double avg = sum / 3.0;

	printf("�հ� : %d\n", sum);
	printf("��� : %lf", avg);

	// �հ� : 150
	// ��� : 50

	return 0;
}