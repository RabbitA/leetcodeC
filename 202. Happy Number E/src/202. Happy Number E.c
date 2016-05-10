#include<stdio.h>
#include<math.h>
int main(){
	int input=82;
	int i=0, ary[32]={0}, sum=0, count=0, result=0;

	while (input != 1) {

		//put input into ary[]
		for (i = 0; input; i++) {
			ary[i] = input % 10;
			input /= 10;
		}

		//sum power ary[i] up

		sum = 0;
		while (i) {
			i--;
			sum = sum + pow(ary[i], 2);
			printf("sum=%d\n",sum);
		}

		input = sum;
		count++;

		if(count>100){
			printf("this is an unhappy num");
			result=0;
			break;
		}
	}
	if(input==1){
		printf("this is a happy num");
		result=1;
	}
	return result;
}
