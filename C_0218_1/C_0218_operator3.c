#include <stdio.h>

int main8() {
	
	// 산술연산자
	//+, -, *, /, %
	// + : 왼쪽값과 오른쪽값을 더하기
	// - : 왼쪽값에서 오른쪽값을 빼기
	// * : 왼쪽값을 오른쪽값으로 곱하기
	// / : 왼쪽값을 오른쪽값으로 나누기
	// % : 왼쪽값을 오른쪽값으로 나눈 나머지를 구함(나머지값을 구할때 사용)

	// 교재 page74
	int num1 = 7, num2 = 3;
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d\n", num1, num2, num1 % num2);


	return 0;
}