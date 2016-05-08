
#include <stdio.h>
#include <stdlib.h>

int main() {
	int heap;
	scanf("%d",&heap);
	if (heap%4==0) {
		printf("You will lose!");
		return 0;
	} else {
		printf("You can win!");
		return 1;
	}
}
