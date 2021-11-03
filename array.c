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
		"temp에 num[9]를(1) 을 넣어두고 for문 실행
		num[9](1)부터 num[1](9)까지 num[i] = num[i-1] 코드를 실행시킨다.
		Ex) i가 9일 때, num[9]인 1에 num[i-1]인 2를 넣어주고 순차적으로 진행된다. "										
										
										
										
		()	10	9	8	7	6	5	4	3	2	
		상태가 된다. For문이 끝나고 난 후에 num[0]인(아무것도 없는 공간(0)) 곳에 넣어두었던 temp(1) 을 넣어준다.										
										
										
										
		1	10	9	8	7	6	5	4	3	2	<-  실행결과

	*/

	return 0;
}