#include <stdio.h>

int main() {
	int num[10] = { 1,2,3,4,5,6,7,8,9,10 }, temp, i;
	temp = num[0];
	for (i = 1; i <= 10; i++) {
		num[i - 1] = num[i];
	}
	num[9] = temp;
	for (i = 0; i < 10; i++) {
		printf("%d ", num[i]);

	}
}