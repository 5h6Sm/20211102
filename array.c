#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int num[10], temp, i;
	for (i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
	}
	temp = num[9];
	for (i = 9; i > 0; i--) {
		num[i] = num[i-1];
	}
	num[0] = temp;
	for (i = 0; i < 10; i++) {
		printf("%d ", num[i]);
	}
	/*
		"temp�� num[9]��(1) �� �־�ΰ� for�� ����
		num[9](1)���� num[1](9)���� num[i] = num[i-1] �ڵ带 �����Ų��.
		Ex) i�� 9�� ��, num[9]�� 1�� num[i-1]�� 2�� �־��ְ� ���������� ����ȴ�. "										
										
										
										
		()	10	9	8	7	6	5	4	3	2	
		���°� �ȴ�. For���� ������ �� �Ŀ� num[0]��(�ƹ��͵� ���� ����(0)) ���� �־�ξ��� temp(1) �� �־��ش�.										
										
										
										
		1	10	9	8	7	6	5	4	3	2	<-  ������

	*/

	return 0;
}