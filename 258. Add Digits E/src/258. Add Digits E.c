#include<stdio.h>
int main() {
	int input = 3423244;
	int i = 0, ary[32] = { 0 }, sum = 0;

	while (input > 9) {
		//put every num into ary[]
		for (i = 0; input; i++) {
			ary[i] = input % 10;
			input /= 10;
		}

		//sum up ary[]
		sum = 0;
		while (i) {
			sum += ary[--i];
		}

		input = sum;
		printf("sum=%d\n", sum);
	}
	printf("result=%d", sum);

}
