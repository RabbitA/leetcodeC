//sizeof命令中
//1.如果参数是指针变量（无论什么类型的指针）其结果都是4
//2.如果参数是是数组，会返回数组所占空间的大小，即:int a[n]  ; sizeof(a)=n*sizeof(int) ;
//3.如果参数是个变量类型，则会返回这个类型所占空间的大小。sizeof(char)=1 sizeof(int)=4 sizeof(double)=8 具体一个变量类型所占的空间大小与机器类型有关系，如32位机long占4字节，而64位机long占8字节。
#include <stdio.h>
int main(){
	int a[]={1,2,3,4,5,6,7,8,9,0};
	int len;
	int i=0;

	len=sizeof(a)/4; // surprise to find out this work!

	while(i<len){
		printf("%d ",a[i]);
		i++;
	}

	len=sizeof(a)/4;  // surprise to find out this work!

	printf("\nary a[] length=%d",len);
}
