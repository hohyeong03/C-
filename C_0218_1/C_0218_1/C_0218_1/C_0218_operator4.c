#include <stdio.h>

int main() {

	int kor = 50, eng = 40, math = 60;
	int sum = kor + eng + math;
	double avg = sum / 3.0;

	printf("ÇÕ°è : %d\n", sum);
	printf("Æò±Õ : %lf", avg);

	// ÇÕ°è : 150
	// Æò±Õ : 50

	return 0;
}