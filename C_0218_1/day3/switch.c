#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main5() {
	// if ~ else if ~ else
	// switch ~ case ~ break
	// switch문 : 같은값을 찾을때 사용하는 조건문
	// if문 : 범위조건, 일치/불일치조건(>,==)
	// switch문 : 일치조건(==)
	/*char word = 'a';

	// 대상이 되는 변수를 ()에 적는다
	switch (word) {
	case 'a':		//word == 'a'
		printf("단어는 a입니다.");
		break;		//case가 끝나면 break;
	case 'b':		//word == 'b'
		printf("단어는 b입니다.");
		break;
	case 'c':		//word == 'c'
		printf("단어는 c입니다.");
		break;
	default:		//일치하는 case가 없음
		printf("해당하는 단어가 없습니다."); // else
	}
	*/
	// switch : ()와 일치하는 조건 찾기

	int num = 0;
	printf("번호를 선택하세요>>");
	scanf("%d", &num);
	//1~4, default
	switch (num) {
	case 1:
		printf("1번을 선택했습니다.");
		break;
	case 2:
		printf("2번을 선택했습니다.");
		break;
	case 3:
		printf("3번을 선택했습니다.");
		break;
	case 4:
		printf("4번을 선택했습니다.");
		break;
	default:
		printf("해당번호가 없습니다.");
	}

	return 0;
}