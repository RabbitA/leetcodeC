#include <stdio.h>
#include <stdlib.h>

void swap(int *b, int *c){
	int temp;
	temp=*b;
	*b=*c;
	*c=temp;
	return;
}

int main(){
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int i,j;
	i=0;
	j=0;
//	while(a[i][j]!=5) {
//		printf("i=%d,j=%d\n",i,j);
//		i++;
//		while(a[i][j]!=5) {
//			printf("i=%d,j=%d\n",i,j);
//			j++;
//			if(a[i][j]==5) {
//				break;
//			}
//		}
//		if(a[i][j]==5) {
//			break;
//		}
//	}
//	printf("i=%d,j=%d\n",i,j);

//	for (i=0;i!=2;i++){
//		printf("i=%d,j=%d\n", i, j);
//		for(j=0;j<3;j++){
//			if(a[i][j]==5){
//				break;
//			}
//			printf("i=%d,j=%d\n", i, j);
//		}
//		if(a[i][j]==5){
//			break;
//		}
//	}
//	printf("i=%d,j=%d\n", i, j);

	int l=5, sum=0;
	while(l){
		sum=sum+l%2;
		l=(l-l%2)/2;
	}
	printf("%d",sum);
	}



