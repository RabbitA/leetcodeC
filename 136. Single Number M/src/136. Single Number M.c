#include <stdio.h>
#include <string.h>

int main(void) {
	int org[]={1,2,3,4,5,6,7,8,9,0,9,8,7,6,5,4,3,2,1};
	int i,j;
	int len; //length of org[]
	len =19;

	for (i=0;i<len;i++){
		int test=1; 	//第n位减去第一位，第n位减去第二位....对差求乘积，如果出现有两个相同数字，则结果为零 (排除了第n位减第n位的情况)
		for(j=0;j<len;j++){
			if(j!=i){    		//(排除了第n位减第n位的情况)
				test=(org[i]-org[j])*test;
				printf("i=%d j=%d test=%d\n",i,j,test);
			}
		}
		if (test!=0){
			printf("single element=%d",org[i]);
			break;
		}
	}
}
