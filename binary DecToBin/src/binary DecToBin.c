#include <stdio.h>
void main(){
	int a, i, temp[32];
	printf("input a positive int: ");
	scanf("%d", &a);

	for (i = 0; i < 16; i++) {
		temp[i] = a & 1;
		a = a >> 1;
		printf("temp[%d]=%d\n", i, temp[i]);
	}

	while (i) {
		printf("%d", temp[--i]);
	}

}
