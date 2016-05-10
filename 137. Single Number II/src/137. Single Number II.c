//initial thoughts: change each of elements into binary. Add them. Then %3. The single element should left with binary form.
#include <stdio.h>
#include <math.h>
void main() {
	int ary[] = { 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 1 };
	int arysize = 13;

	int sum[32] = { 0 };
	int i, j, temp;
	int result = 0;

	for (i = 0; i < arysize; i++) { //select i th element from ary[]
		temp = ary[i];
		for (j = 0; j < 32; j++) { //change i th element into binary and add with sum[]
			//printf("%d", temp);
			sum[j] = sum[j] + (temp & 1);
			temp = temp >> 1;
		}
		//printf("\n");
	}

	//print out binary of single element
	while (j) {
		--j;
		sum[j] = sum[j] % 3;
		printf("%d ", sum[j]);
	}

	//print out dec of single element
	for(j=30;j>0;j--){
		result=result+(sum[j]&1);
		result<<=1;
	}
	result+=(sum[j]&1);
	if(sum[31]){
		//result=-result; //should be this， but we have to make sure 32 fits int
		result-=2147483648;
	}

	printf("\nsingle element: %d", result);

}
