#include <stdio.h>

int main12() {
	// ���� 143p #1 #2

	//#1
	// ����ڰ� 1�̻��� ���� n�� �Է��ϸ� 1���� n������ ���� ���ϴ� ���α׷��� ���弼��
	/*
		<���� ��>
		������ �Է��ϼ���:5
		1���� 5������ ���� 15�Դϴ�.
	*/
	//int i, n, sum = 0;
	//
	//printf("1���� n������ �� ��� \n");
	//printf("���� n �Է�");
	//scanf("%d", &n);
	//for (i = 1; i <= n; i += 1) {
	//	sum += i;
	//	printf("1���� %d������ ����:%d \n", n, sum);
	//}
	
	int n, i = 1, sum=0;
	printf("������ �Է��ϼ���:");
	scanf("%d", &n);
	while (i <= n) {
		sum += i;
		i++;

	}
	printf("1����%d������ ���� %d �Դϴ�.", n, sum);






	// #2
	// 1���� 100������ ���� �� 6�� ����� ����ϴ� ���α׷� �����
	/*
		<���� ��>
		6 12 18 24 30 36 42 48 54 60 66 72 78 84 90 96
	*/
	for (int j = 1; j < 100; j++) {
		if (j % 6 == 0) {
			printf("%d ", j);
		}
	}
	printf("\n");




	// #3
	// �ƽ�Ű�ڵ�(����345~346) : �� ���ڿ� �Ҵ�� ������
	// ���ĺ��� �Է¹޾� ����ϴ� ���α׷� �� �빮�ڸ� ���α׷� ����
	// 65~90 : �빮��, 97~122 : �ҹ���
			char word = 0;

			while (1) {
				printf("���ĺ��� �Է��ϼ���:");
				rewind(stdin);		// ���۹��� ����
				scanf("%c", &word);

				if (word >= 65 && word <= 90) {
					printf("�����մϴ�");		//65=='A', 90=='Z'
						break;
				}
				else if (word >= 97 && word <= 122) {
					printf("%c�Է��߽��ϴ�\n", word);		// 97=='a', 122=='z'
				}
			}



	return 0;
}