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
<-			여기까지 첫번째 for문이 실행					.>							
															
"temp에 arr[i+1]을 집어넣음. Ex)i가 0일 때, temp에는 arr[1](1)이 들어감.
Arr[i+1]에 arr[i]가 들어감. Ex) i가 0일 때, arr[1](1)에 arr[0](10)이 들어감
arr[0]에 temp(1)이 들어감"															
															
															
temp 															
1															
1	10	2	3	4	5	6	7	8	9						
1	2	10	3	4	5	6	7	8	9						
1	2	3	10	4	5	6	7	8	9						
이런식으로 바꿔가는 것.															

	*/
	return 0;
}