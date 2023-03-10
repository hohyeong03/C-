#include <stdio.h>

int main3() {
	// 변수에는 종류가 있다(자료형)
	// 한글자 변수, 숫자 변수, 소수점있는 숫자 변수, 여러글자 변수

	// 문자변수(한글자)
	char one = 'A';          // 사용할땐 %c
	// 1byte 사용

	// 정수변수(소수점없는 숫자)
	int number1 = 123;        // 사용할땐 %d
	// 4byte 사용

	// 실수변수(소수점있는 숫자)
	double number2 = -3.14;   // 사용할땐 %lf
	// 8byte 사용
	
	// 문자열 변수(여러글자)
	char multi[100] = "99글자까지 저장 가능합니다.";   // 사용할땐 %s


	// 자료형 사용의 이유
	// 1. 개발자의 의도를 명확하게 전달
	// 2. 개발자의 실수를 컴파일러(visual studio)가 검출해내기 위해서
	// 3. 자료형 마다 공간의 크기가 다름(최적화)

	char 변수1[] = "34 - 2";
	int 변수2 = "34 - 2";

	return 0;
}