#include<stdio.h>
void main(){
	int a[]={1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9};
	int aSize=19;
	int i;
	int result=0;//use "xor" to calculate each elements in a[], result should equal to the single one.
	for (i=0;i<aSize;i++){
		result=result^a[i];
	}
	printf("single=%d",result);
}
