#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int arr[10] = {10,1,2,3,4,5,6,7,8,9}, temp, i, j;

	for (i = 0; i < 9; i++) {
		temp = arr[i + 1];
		arr[i + 1] = arr[i];
		arr[i] = temp;
		for (j = 0; j < 10; j++) {
			printf("%d ", arr[j]);
		}
		printf("\n");
	}
	/*
																
10	1	2	3	4	5	6	7	8	9						
<-			������� ù��° for���� ����					.>							
															
"temp�� arr[i+1]�� �������. Ex)i�� 0�� ��, temp���� arr[1](1)�� ��.
Arr[i+1]�� arr[i]�� ��. Ex) i�� 0�� ��, arr[1](1)�� arr[0](10)�� ��
arr[0]�� temp(1)�� ��"															
															
															
temp 															
1															
1	10	2	3	4	5	6	7	8	9						
1	2	10	3	4	5	6	7	8	9						
1	2	3	10	4	5	6	7	8	9						
�̷������� �ٲ㰡�� ��.															

	*/
	return 0;
}