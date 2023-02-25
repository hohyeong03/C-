#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main1() {
	// 조건문 If : 조건에 따라서 내 프로그램을 다르게 동작시켜야할 때
	int num = 3;

	(num < 3) ? printf("3보다작습니다.") : printf("3이상입니다");

	//if문
	//if(){}
	//()안에 있는 조건이 맞을때 {}에 있는 코드를 실행한다
	if (num < 3) {
		// 조건이 맞을때만 실행할 코드
		printf("3보다 작습니다.");
	}

	if (num >= 3) {
		// num이 3보다 크거나 같을때(맞을때)만 실행할 코드
		printf("3 이상입니다.");
	}

	if (num == 3) {
		printf("3과 같습니다.");

	}

	int age = 20;
	// 나이가 20이상일때만 성인입니다 출력
	if (age >= 20) {
		printf("성인입니다.");

	}

	//if(){}

	return 0;
}