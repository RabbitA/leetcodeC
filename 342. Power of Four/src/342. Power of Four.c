#include <stdio.h>
int main() {
	int a;
	a = 16;
	if (a % 4 != 0 || a == 0) {  //case 1, a=0 or a%4!=0
		printf("false");
	} else if (a != 4) {      //case 2, a%4=0
		while (a % 4 == 0 && a != 4) {
			a = a / 4;
			if (a % 4 != 0) { //12, 32, 56 ...
				printf("false");
				break;
			} else if (a == 4) {//16 64
				printf("true");
				break;
			}
		}
	} else {            // case 3, a=4
		printf("true");
	}
}
