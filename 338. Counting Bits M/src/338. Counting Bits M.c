#include <stdio.h>
int main(){
	int num; scanf("%d",&num);
	int i, ary[30];

	for(i=0;i<=num;i++){
		int sum=0;
		int j=i;
		while(j){
			sum=sum+j%2;
			j=(j-j%2)/2;
		}
		ary[i]= sum;
		printf("%d\n",sum);
	}
	printf("ary=%d",ary[6]);  //store sum in ary[]

}
